package com.davidlin54.chemistry;

import android.os.Bundle;
import android.support.design.widget.TextInputLayout;
import android.support.v7.app.AppCompatActivity;
import android.text.Editable;
import android.text.Html;
import android.text.TextWatcher;
import android.view.View;
import android.view.View.OnClickListener;
import android.view.inputmethod.InputMethodManager;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity
  extends AppCompatActivity
  implements MainView
{
  private Button mBalanceButton;
  private MainPresenter mPresenter;
  private EditText mProductsInput;
  private TextInputLayout mProductsLayout;
  private EditText mReactantsInput;
  private TextInputLayout mReactantsLayout;
  private TextView mResults;

  private void clearInputFocus()
  {
    View localView = getCurrentFocus();
    if (localView != null) {
      ((InputMethodManager)getSystemService("input_method")).hideSoftInputFromWindow(localView.getWindowToken(), 0);
    }
  }

  protected void onCreate(Bundle paramBundle)
  {
    super.onCreate(paramBundle);
    setContentView(2130968603);
    this.mReactantsInput = ((EditText)findViewById(2131558517));
    this.mProductsInput = ((EditText)findViewById(2131558519));
    this.mReactantsLayout = ((TextInputLayout)findViewById(2131558516));
    this.mProductsLayout = ((TextInputLayout)findViewById(2131558518));
    this.mReactantsInput.addTextChangedListener(new TextWatcher()
    {
      public void afterTextChanged(Editable paramAnonymousEditable) {}

      public void beforeTextChanged(CharSequence paramAnonymousCharSequence, int paramAnonymousInt1, int paramAnonymousInt2, int paramAnonymousInt3) {}

      public void onTextChanged(CharSequence paramAnonymousCharSequence, int paramAnonymousInt1, int paramAnonymousInt2, int paramAnonymousInt3)
      {
        MainActivity.this.mReactantsLayout.setErrorEnabled(false);
      }
    });
    this.mProductsInput.addTextChangedListener(new TextWatcher()
    {
      public void afterTextChanged(Editable paramAnonymousEditable) {}

      public void beforeTextChanged(CharSequence paramAnonymousCharSequence, int paramAnonymousInt1, int paramAnonymousInt2, int paramAnonymousInt3) {}

      public void onTextChanged(CharSequence paramAnonymousCharSequence, int paramAnonymousInt1, int paramAnonymousInt2, int paramAnonymousInt3)
      {
        MainActivity.this.mProductsLayout.setErrorEnabled(false);
      }
    });
    this.mResults = ((TextView)findViewById(2131558521));
    this.mBalanceButton = ((Button)findViewById(2131558520));
    this.mBalanceButton.setOnClickListener(new View.OnClickListener()
    {
      public void onClick(View paramAnonymousView)
      {
        MainActivity.this.clearInputFocus();
        MainActivity.this.mPresenter.balanceEquation(MainActivity.this.mReactantsInput.getText().toString(), MainActivity.this.mProductsInput.getText().toString());
      }
    });
    this.mPresenter = new MainPresenterImpl(this);
  }

  public void setError(int paramInt1, int paramInt2)
  {
    setError(paramInt1, getString(paramInt2));
  }

  public void setError(int paramInt, String paramString)
  {
    if (paramInt == 2131558516) {
      this.mReactantsLayout.setError(paramString);
    }
    for (;;)
    {
      setResults("");
      return;
      this.mProductsLayout.setError(paramString);
    }
  }

  public void setResults(String paramString)
  {
    this.mResults.setText(Html.fromHtml(paramString));
  }
}
