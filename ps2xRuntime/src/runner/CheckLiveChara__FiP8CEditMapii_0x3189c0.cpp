#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckLiveChara__FiP8CEditMapii
// Address: 0x3189c0 - 0x318e28
void CheckLiveChara__FiP8CEditMapii_0x3189c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckLiveChara__FiP8CEditMapii_0x3189c0");
#endif

    switch (ctx->pc) {
        case 0x3189c0u: goto label_3189c0;
        case 0x3189c4u: goto label_3189c4;
        case 0x3189c8u: goto label_3189c8;
        case 0x3189ccu: goto label_3189cc;
        case 0x3189d0u: goto label_3189d0;
        case 0x3189d4u: goto label_3189d4;
        case 0x3189d8u: goto label_3189d8;
        case 0x3189dcu: goto label_3189dc;
        case 0x3189e0u: goto label_3189e0;
        case 0x3189e4u: goto label_3189e4;
        case 0x3189e8u: goto label_3189e8;
        case 0x3189ecu: goto label_3189ec;
        case 0x3189f0u: goto label_3189f0;
        case 0x3189f4u: goto label_3189f4;
        case 0x3189f8u: goto label_3189f8;
        case 0x3189fcu: goto label_3189fc;
        case 0x318a00u: goto label_318a00;
        case 0x318a04u: goto label_318a04;
        case 0x318a08u: goto label_318a08;
        case 0x318a0cu: goto label_318a0c;
        case 0x318a10u: goto label_318a10;
        case 0x318a14u: goto label_318a14;
        case 0x318a18u: goto label_318a18;
        case 0x318a1cu: goto label_318a1c;
        case 0x318a20u: goto label_318a20;
        case 0x318a24u: goto label_318a24;
        case 0x318a28u: goto label_318a28;
        case 0x318a2cu: goto label_318a2c;
        case 0x318a30u: goto label_318a30;
        case 0x318a34u: goto label_318a34;
        case 0x318a38u: goto label_318a38;
        case 0x318a3cu: goto label_318a3c;
        case 0x318a40u: goto label_318a40;
        case 0x318a44u: goto label_318a44;
        case 0x318a48u: goto label_318a48;
        case 0x318a4cu: goto label_318a4c;
        case 0x318a50u: goto label_318a50;
        case 0x318a54u: goto label_318a54;
        case 0x318a58u: goto label_318a58;
        case 0x318a5cu: goto label_318a5c;
        case 0x318a60u: goto label_318a60;
        case 0x318a64u: goto label_318a64;
        case 0x318a68u: goto label_318a68;
        case 0x318a6cu: goto label_318a6c;
        case 0x318a70u: goto label_318a70;
        case 0x318a74u: goto label_318a74;
        case 0x318a78u: goto label_318a78;
        case 0x318a7cu: goto label_318a7c;
        case 0x318a80u: goto label_318a80;
        case 0x318a84u: goto label_318a84;
        case 0x318a88u: goto label_318a88;
        case 0x318a8cu: goto label_318a8c;
        case 0x318a90u: goto label_318a90;
        case 0x318a94u: goto label_318a94;
        case 0x318a98u: goto label_318a98;
        case 0x318a9cu: goto label_318a9c;
        case 0x318aa0u: goto label_318aa0;
        case 0x318aa4u: goto label_318aa4;
        case 0x318aa8u: goto label_318aa8;
        case 0x318aacu: goto label_318aac;
        case 0x318ab0u: goto label_318ab0;
        case 0x318ab4u: goto label_318ab4;
        case 0x318ab8u: goto label_318ab8;
        case 0x318abcu: goto label_318abc;
        case 0x318ac0u: goto label_318ac0;
        case 0x318ac4u: goto label_318ac4;
        case 0x318ac8u: goto label_318ac8;
        case 0x318accu: goto label_318acc;
        case 0x318ad0u: goto label_318ad0;
        case 0x318ad4u: goto label_318ad4;
        case 0x318ad8u: goto label_318ad8;
        case 0x318adcu: goto label_318adc;
        case 0x318ae0u: goto label_318ae0;
        case 0x318ae4u: goto label_318ae4;
        case 0x318ae8u: goto label_318ae8;
        case 0x318aecu: goto label_318aec;
        case 0x318af0u: goto label_318af0;
        case 0x318af4u: goto label_318af4;
        case 0x318af8u: goto label_318af8;
        case 0x318afcu: goto label_318afc;
        case 0x318b00u: goto label_318b00;
        case 0x318b04u: goto label_318b04;
        case 0x318b08u: goto label_318b08;
        case 0x318b0cu: goto label_318b0c;
        case 0x318b10u: goto label_318b10;
        case 0x318b14u: goto label_318b14;
        case 0x318b18u: goto label_318b18;
        case 0x318b1cu: goto label_318b1c;
        case 0x318b20u: goto label_318b20;
        case 0x318b24u: goto label_318b24;
        case 0x318b28u: goto label_318b28;
        case 0x318b2cu: goto label_318b2c;
        case 0x318b30u: goto label_318b30;
        case 0x318b34u: goto label_318b34;
        case 0x318b38u: goto label_318b38;
        case 0x318b3cu: goto label_318b3c;
        case 0x318b40u: goto label_318b40;
        case 0x318b44u: goto label_318b44;
        case 0x318b48u: goto label_318b48;
        case 0x318b4cu: goto label_318b4c;
        case 0x318b50u: goto label_318b50;
        case 0x318b54u: goto label_318b54;
        case 0x318b58u: goto label_318b58;
        case 0x318b5cu: goto label_318b5c;
        case 0x318b60u: goto label_318b60;
        case 0x318b64u: goto label_318b64;
        case 0x318b68u: goto label_318b68;
        case 0x318b6cu: goto label_318b6c;
        case 0x318b70u: goto label_318b70;
        case 0x318b74u: goto label_318b74;
        case 0x318b78u: goto label_318b78;
        case 0x318b7cu: goto label_318b7c;
        case 0x318b80u: goto label_318b80;
        case 0x318b84u: goto label_318b84;
        case 0x318b88u: goto label_318b88;
        case 0x318b8cu: goto label_318b8c;
        case 0x318b90u: goto label_318b90;
        case 0x318b94u: goto label_318b94;
        case 0x318b98u: goto label_318b98;
        case 0x318b9cu: goto label_318b9c;
        case 0x318ba0u: goto label_318ba0;
        case 0x318ba4u: goto label_318ba4;
        case 0x318ba8u: goto label_318ba8;
        case 0x318bacu: goto label_318bac;
        case 0x318bb0u: goto label_318bb0;
        case 0x318bb4u: goto label_318bb4;
        case 0x318bb8u: goto label_318bb8;
        case 0x318bbcu: goto label_318bbc;
        case 0x318bc0u: goto label_318bc0;
        case 0x318bc4u: goto label_318bc4;
        case 0x318bc8u: goto label_318bc8;
        case 0x318bccu: goto label_318bcc;
        case 0x318bd0u: goto label_318bd0;
        case 0x318bd4u: goto label_318bd4;
        case 0x318bd8u: goto label_318bd8;
        case 0x318bdcu: goto label_318bdc;
        case 0x318be0u: goto label_318be0;
        case 0x318be4u: goto label_318be4;
        case 0x318be8u: goto label_318be8;
        case 0x318becu: goto label_318bec;
        case 0x318bf0u: goto label_318bf0;
        case 0x318bf4u: goto label_318bf4;
        case 0x318bf8u: goto label_318bf8;
        case 0x318bfcu: goto label_318bfc;
        case 0x318c00u: goto label_318c00;
        case 0x318c04u: goto label_318c04;
        case 0x318c08u: goto label_318c08;
        case 0x318c0cu: goto label_318c0c;
        case 0x318c10u: goto label_318c10;
        case 0x318c14u: goto label_318c14;
        case 0x318c18u: goto label_318c18;
        case 0x318c1cu: goto label_318c1c;
        case 0x318c20u: goto label_318c20;
        case 0x318c24u: goto label_318c24;
        case 0x318c28u: goto label_318c28;
        case 0x318c2cu: goto label_318c2c;
        case 0x318c30u: goto label_318c30;
        case 0x318c34u: goto label_318c34;
        case 0x318c38u: goto label_318c38;
        case 0x318c3cu: goto label_318c3c;
        case 0x318c40u: goto label_318c40;
        case 0x318c44u: goto label_318c44;
        case 0x318c48u: goto label_318c48;
        case 0x318c4cu: goto label_318c4c;
        case 0x318c50u: goto label_318c50;
        case 0x318c54u: goto label_318c54;
        case 0x318c58u: goto label_318c58;
        case 0x318c5cu: goto label_318c5c;
        case 0x318c60u: goto label_318c60;
        case 0x318c64u: goto label_318c64;
        case 0x318c68u: goto label_318c68;
        case 0x318c6cu: goto label_318c6c;
        case 0x318c70u: goto label_318c70;
        case 0x318c74u: goto label_318c74;
        case 0x318c78u: goto label_318c78;
        case 0x318c7cu: goto label_318c7c;
        case 0x318c80u: goto label_318c80;
        case 0x318c84u: goto label_318c84;
        case 0x318c88u: goto label_318c88;
        case 0x318c8cu: goto label_318c8c;
        case 0x318c90u: goto label_318c90;
        case 0x318c94u: goto label_318c94;
        case 0x318c98u: goto label_318c98;
        case 0x318c9cu: goto label_318c9c;
        case 0x318ca0u: goto label_318ca0;
        case 0x318ca4u: goto label_318ca4;
        case 0x318ca8u: goto label_318ca8;
        case 0x318cacu: goto label_318cac;
        case 0x318cb0u: goto label_318cb0;
        case 0x318cb4u: goto label_318cb4;
        case 0x318cb8u: goto label_318cb8;
        case 0x318cbcu: goto label_318cbc;
        case 0x318cc0u: goto label_318cc0;
        case 0x318cc4u: goto label_318cc4;
        case 0x318cc8u: goto label_318cc8;
        case 0x318cccu: goto label_318ccc;
        case 0x318cd0u: goto label_318cd0;
        case 0x318cd4u: goto label_318cd4;
        case 0x318cd8u: goto label_318cd8;
        case 0x318cdcu: goto label_318cdc;
        case 0x318ce0u: goto label_318ce0;
        case 0x318ce4u: goto label_318ce4;
        case 0x318ce8u: goto label_318ce8;
        case 0x318cecu: goto label_318cec;
        case 0x318cf0u: goto label_318cf0;
        case 0x318cf4u: goto label_318cf4;
        case 0x318cf8u: goto label_318cf8;
        case 0x318cfcu: goto label_318cfc;
        case 0x318d00u: goto label_318d00;
        case 0x318d04u: goto label_318d04;
        case 0x318d08u: goto label_318d08;
        case 0x318d0cu: goto label_318d0c;
        case 0x318d10u: goto label_318d10;
        case 0x318d14u: goto label_318d14;
        case 0x318d18u: goto label_318d18;
        case 0x318d1cu: goto label_318d1c;
        case 0x318d20u: goto label_318d20;
        case 0x318d24u: goto label_318d24;
        case 0x318d28u: goto label_318d28;
        case 0x318d2cu: goto label_318d2c;
        case 0x318d30u: goto label_318d30;
        case 0x318d34u: goto label_318d34;
        case 0x318d38u: goto label_318d38;
        case 0x318d3cu: goto label_318d3c;
        case 0x318d40u: goto label_318d40;
        case 0x318d44u: goto label_318d44;
        case 0x318d48u: goto label_318d48;
        case 0x318d4cu: goto label_318d4c;
        case 0x318d50u: goto label_318d50;
        case 0x318d54u: goto label_318d54;
        case 0x318d58u: goto label_318d58;
        case 0x318d5cu: goto label_318d5c;
        case 0x318d60u: goto label_318d60;
        case 0x318d64u: goto label_318d64;
        case 0x318d68u: goto label_318d68;
        case 0x318d6cu: goto label_318d6c;
        case 0x318d70u: goto label_318d70;
        case 0x318d74u: goto label_318d74;
        case 0x318d78u: goto label_318d78;
        case 0x318d7cu: goto label_318d7c;
        case 0x318d80u: goto label_318d80;
        case 0x318d84u: goto label_318d84;
        case 0x318d88u: goto label_318d88;
        case 0x318d8cu: goto label_318d8c;
        case 0x318d90u: goto label_318d90;
        case 0x318d94u: goto label_318d94;
        case 0x318d98u: goto label_318d98;
        case 0x318d9cu: goto label_318d9c;
        case 0x318da0u: goto label_318da0;
        case 0x318da4u: goto label_318da4;
        case 0x318da8u: goto label_318da8;
        case 0x318dacu: goto label_318dac;
        case 0x318db0u: goto label_318db0;
        case 0x318db4u: goto label_318db4;
        case 0x318db8u: goto label_318db8;
        case 0x318dbcu: goto label_318dbc;
        case 0x318dc0u: goto label_318dc0;
        case 0x318dc4u: goto label_318dc4;
        case 0x318dc8u: goto label_318dc8;
        case 0x318dccu: goto label_318dcc;
        case 0x318dd0u: goto label_318dd0;
        case 0x318dd4u: goto label_318dd4;
        case 0x318dd8u: goto label_318dd8;
        case 0x318ddcu: goto label_318ddc;
        case 0x318de0u: goto label_318de0;
        case 0x318de4u: goto label_318de4;
        case 0x318de8u: goto label_318de8;
        case 0x318decu: goto label_318dec;
        case 0x318df0u: goto label_318df0;
        case 0x318df4u: goto label_318df4;
        case 0x318df8u: goto label_318df8;
        case 0x318dfcu: goto label_318dfc;
        case 0x318e00u: goto label_318e00;
        case 0x318e04u: goto label_318e04;
        case 0x318e08u: goto label_318e08;
        case 0x318e0cu: goto label_318e0c;
        case 0x318e10u: goto label_318e10;
        case 0x318e14u: goto label_318e14;
        case 0x318e18u: goto label_318e18;
        case 0x318e1cu: goto label_318e1c;
        case 0x318e20u: goto label_318e20;
        case 0x318e24u: goto label_318e24;
        default: break;
    }

    ctx->pc = 0x3189c0u;

label_3189c0:
    // 0x3189c0: 0x27bdf780  addiu       $sp, $sp, -0x880
    ctx->pc = 0x3189c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965120));
label_3189c4:
    // 0x3189c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3189c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3189c8:
    // 0x3189c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3189c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3189cc:
    // 0x3189cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3189ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3189d0:
    // 0x3189d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3189d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3189d4:
    // 0x3189d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3189d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3189d8:
    // 0x3189d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3189d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3189dc:
    // 0x3189dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3189dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3189e0:
    // 0x3189e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3189e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3189e4:
    // 0x3189e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3189e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3189e8:
    // 0x3189e8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3189e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3189ec:
    // 0x3189ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3189ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3189f0:
    // 0x3189f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3189f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3189f4:
    // 0x3189f4: 0xc06c310  jal         func_1B0C40
label_3189f8:
    if (ctx->pc == 0x3189F8u) {
        ctx->pc = 0x3189F8u;
            // 0x3189f8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3189FCu;
        goto label_3189fc;
    }
    ctx->pc = 0x3189F4u;
    SET_GPR_U32(ctx, 31, 0x3189FCu);
    ctx->pc = 0x3189F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3189F4u;
            // 0x3189f8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3189FCu; }
        if (ctx->pc != 0x3189FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3189FCu; }
        if (ctx->pc != 0x3189FCu) { return; }
    }
    ctx->pc = 0x3189FCu;
label_3189fc:
    // 0x3189fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3189fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318a00:
    // 0x318a00: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_318a04:
    if (ctx->pc == 0x318A04u) {
        ctx->pc = 0x318A04u;
            // 0x318a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318A08u;
        goto label_318a08;
    }
    ctx->pc = 0x318A00u;
    {
        const bool branch_taken_0x318a00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x318A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318A00u;
            // 0x318a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a00) {
            ctx->pc = 0x318A10u;
            goto label_318a10;
        }
    }
    ctx->pc = 0x318A08u;
label_318a08:
    // 0x318a08: 0x100000ff  b           . + 4 + (0xFF << 2)
label_318a0c:
    if (ctx->pc == 0x318A0Cu) {
        ctx->pc = 0x318A0Cu;
            // 0x318a0c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x318A10u;
        goto label_318a10;
    }
    ctx->pc = 0x318A08u;
    {
        const bool branch_taken_0x318a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318A08u;
            // 0x318a0c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a08) {
            ctx->pc = 0x318E08u;
            goto label_318e08;
        }
    }
    ctx->pc = 0x318A10u;
label_318a10:
    // 0x318a10: 0x8e150324  lw          $s5, 0x324($s0)
    ctx->pc = 0x318a10u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
label_318a14:
    // 0x318a14: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_318a18:
    if (ctx->pc == 0x318A18u) {
        ctx->pc = 0x318A18u;
            // 0x318a18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318A1Cu;
        goto label_318a1c;
    }
    ctx->pc = 0x318A14u;
    {
        const bool branch_taken_0x318a14 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x318A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318A14u;
            // 0x318a18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a14) {
            ctx->pc = 0x318A24u;
            goto label_318a24;
        }
    }
    ctx->pc = 0x318A1Cu;
label_318a1c:
    // 0x318a1c: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_318a20:
    if (ctx->pc == 0x318A20u) {
        ctx->pc = 0x318A24u;
        goto label_318a24;
    }
    ctx->pc = 0x318A1Cu;
    {
        const bool branch_taken_0x318a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a1c) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318A24u;
label_318a24:
    // 0x318a24: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x318a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_318a28:
    // 0x318a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x318a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_318a2c:
    // 0x318a2c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x318a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_318a30:
    // 0x318a30: 0x320f809  jalr        $t9
label_318a34:
    if (ctx->pc == 0x318A34u) {
        ctx->pc = 0x318A34u;
            // 0x318a34: 0x27a50870  addiu       $a1, $sp, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
        ctx->pc = 0x318A38u;
        goto label_318a38;
    }
    ctx->pc = 0x318A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x318A38u);
        ctx->pc = 0x318A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318A30u;
            // 0x318a34: 0x27a50870  addiu       $a1, $sp, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x318A38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x318A38u; }
            if (ctx->pc != 0x318A38u) { return; }
        }
        }
    }
    ctx->pc = 0x318A38u;
label_318a38:
    // 0x318a38: 0x2e21001a  sltiu       $at, $s1, 0x1A
    ctx->pc = 0x318a38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_318a3c:
    // 0x318a3c: 0x102000f1  beqz        $at, . + 4 + (0xF1 << 2)
label_318a40:
    if (ctx->pc == 0x318A40u) {
        ctx->pc = 0x318A40u;
            // 0x318a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318A44u;
        goto label_318a44;
    }
    ctx->pc = 0x318A3Cu;
    {
        const bool branch_taken_0x318a3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x318A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318A3Cu;
            // 0x318a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a3c) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318A44u;
label_318a44:
    // 0x318a44: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x318a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_318a48:
    // 0x318a48: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x318a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_318a4c:
    // 0x318a4c: 0x246328f0  addiu       $v1, $v1, 0x28F0
    ctx->pc = 0x318a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10480));
label_318a50:
    // 0x318a50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x318a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_318a54:
    // 0x318a54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x318a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_318a58:
    // 0x318a58: 0x400008  jr          $v0
label_318a5c:
    if (ctx->pc == 0x318A5Cu) {
        ctx->pc = 0x318A60u;
        goto label_318a60;
    }
    ctx->pc = 0x318A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x318A60u: goto label_318a60;
            case 0x318A68u: goto label_318a68;
            case 0x318A70u: goto label_318a70;
            case 0x318AA8u: goto label_318aa8;
            case 0x318AB0u: goto label_318ab0;
            case 0x318AFCu: goto label_318afc;
            case 0x318B04u: goto label_318b04;
            case 0x318B0Cu: goto label_318b0c;
            case 0x318B44u: goto label_318b44;
            case 0x318B7Cu: goto label_318b7c;
            case 0x318BACu: goto label_318bac;
            case 0x318BB4u: goto label_318bb4;
            case 0x318BECu: goto label_318bec;
            case 0x318BF4u: goto label_318bf4;
            case 0x318C54u: goto label_318c54;
            case 0x318C70u: goto label_318c70;
            case 0x318C94u: goto label_318c94;
            case 0x318CCCu: goto label_318ccc;
            case 0x318CE8u: goto label_318ce8;
            case 0x318D44u: goto label_318d44;
            case 0x318D6Cu: goto label_318d6c;
            case 0x318D74u: goto label_318d74;
            case 0x318D7Cu: goto label_318d7c;
            case 0x318D8Cu: goto label_318d8c;
            case 0x318DF8u: goto label_318df8;
            case 0x318E00u: goto label_318e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x318A60u;
label_318a60:
    // 0x318a60: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_318a64:
    if (ctx->pc == 0x318A64u) {
        ctx->pc = 0x318A64u;
            // 0x318a64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318A68u;
        goto label_318a68;
    }
    ctx->pc = 0x318A60u;
    {
        const bool branch_taken_0x318a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318A60u;
            // 0x318a64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a60) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318A68u;
label_318a68:
    // 0x318a68: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_318a6c:
    if (ctx->pc == 0x318A6Cu) {
        ctx->pc = 0x318A6Cu;
            // 0x318a6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318A70u;
        goto label_318a70;
    }
    ctx->pc = 0x318A68u;
    {
        const bool branch_taken_0x318a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318A68u;
            // 0x318a6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a68) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318A70u;
label_318a70:
    // 0x318a70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x318a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_318a74:
    // 0x318a74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318a78:
    // 0x318a78: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x318a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_318a7c:
    // 0x318a7c: 0xc0bba48  jal         func_2EE920
label_318a80:
    if (ctx->pc == 0x318A80u) {
        ctx->pc = 0x318A80u;
            // 0x318a80: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x318A84u;
        goto label_318a84;
    }
    ctx->pc = 0x318A7Cu;
    SET_GPR_U32(ctx, 31, 0x318A84u);
    ctx->pc = 0x318A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318A7Cu;
            // 0x318a80: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE920u;
    if (runtime->hasFunction(0x2EE920u)) {
        auto targetFn = runtime->lookupFunction(0x2EE920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318A84u; }
        if (ctx->pc != 0x318A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTerritoryParts__8CEditMapFiPii_0x2ee920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318A84u; }
        if (ctx->pc != 0x318A84u) { return; }
    }
    ctx->pc = 0x318A84u;
label_318a84:
    // 0x318a84: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x318a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318a88:
    // 0x318a88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x318a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_318a8c:
    // 0x318a8c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x318a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_318a90:
    // 0x318a90: 0xc0c5aa0  jal         func_316A80
label_318a94:
    if (ctx->pc == 0x318A94u) {
        ctx->pc = 0x318A94u;
            // 0x318a94: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318A98u;
        goto label_318a98;
    }
    ctx->pc = 0x318A90u;
    SET_GPR_U32(ctx, 31, 0x318A98u);
    ctx->pc = 0x318A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318A90u;
            // 0x318a94: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316A80u;
    if (runtime->hasFunction(0x316A80u)) {
        auto targetFn = runtime->lookupFunction(0x316A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318A98u; }
        if (ctx->pc != 0x318A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountPartsType__FiP8CEditMapPii_0x316a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318A98u; }
        if (ctx->pc != 0x318A98u) { return; }
    }
    ctx->pc = 0x318A98u;
label_318a98:
    // 0x318a98: 0x184000d9  blez        $v0, . + 4 + (0xD9 << 2)
label_318a9c:
    if (ctx->pc == 0x318A9Cu) {
        ctx->pc = 0x318A9Cu;
            // 0x318a9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318AA0u;
        goto label_318aa0;
    }
    ctx->pc = 0x318A98u;
    {
        const bool branch_taken_0x318a98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x318A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318A98u;
            // 0x318a9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a98) {
            ctx->pc = 0x318E00u;
            goto label_318e00;
        }
    }
    ctx->pc = 0x318AA0u;
label_318aa0:
    // 0x318aa0: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_318aa4:
    if (ctx->pc == 0x318AA4u) {
        ctx->pc = 0x318AA8u;
        goto label_318aa8;
    }
    ctx->pc = 0x318AA0u;
    {
        const bool branch_taken_0x318aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318aa0) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318AA8u;
label_318aa8:
    // 0x318aa8: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_318aac:
    if (ctx->pc == 0x318AACu) {
        ctx->pc = 0x318AACu;
            // 0x318aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318AB0u;
        goto label_318ab0;
    }
    ctx->pc = 0x318AA8u;
    {
        const bool branch_taken_0x318aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318AA8u;
            // 0x318aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318aa8) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318AB0u;
label_318ab0:
    // 0x318ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x318ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_318ab4:
    // 0x318ab4: 0xc0c5ea4  jal         func_317A90
label_318ab8:
    if (ctx->pc == 0x318AB8u) {
        ctx->pc = 0x318AB8u;
            // 0x318ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318ABCu;
        goto label_318abc;
    }
    ctx->pc = 0x318AB4u;
    SET_GPR_U32(ctx, 31, 0x318ABCu);
    ctx->pc = 0x318AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318AB4u;
            // 0x318ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317A90u;
    if (runtime->hasFunction(0x317A90u)) {
        auto targetFn = runtime->lookupFunction(0x317A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318ABCu; }
        if (ctx->pc != 0x318ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColorType__FP10CEditPartsi_0x317a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318ABCu; }
        if (ctx->pc != 0x318ABCu) { return; }
    }
    ctx->pc = 0x318ABCu;
label_318abc:
    // 0x318abc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x318abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_318ac0:
    // 0x318ac0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_318ac4:
    if (ctx->pc == 0x318AC4u) {
        ctx->pc = 0x318AC4u;
            // 0x318ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318AC8u;
        goto label_318ac8;
    }
    ctx->pc = 0x318AC0u;
    {
        const bool branch_taken_0x318ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x318AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318AC0u;
            // 0x318ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ac0) {
            ctx->pc = 0x318AD0u;
            goto label_318ad0;
        }
    }
    ctx->pc = 0x318AC8u;
label_318ac8:
    // 0x318ac8: 0x100000ce  b           . + 4 + (0xCE << 2)
label_318acc:
    if (ctx->pc == 0x318ACCu) {
        ctx->pc = 0x318AD0u;
        goto label_318ad0;
    }
    ctx->pc = 0x318AC8u;
    {
        const bool branch_taken_0x318ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318ac8) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318AD0u;
label_318ad0:
    // 0x318ad0: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x318ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_318ad4:
    // 0x318ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318ad8:
    // 0x318ad8: 0x146200c9  bne         $v1, $v0, . + 4 + (0xC9 << 2)
label_318adc:
    if (ctx->pc == 0x318ADCu) {
        ctx->pc = 0x318ADCu;
            // 0x318adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318AE0u;
        goto label_318ae0;
    }
    ctx->pc = 0x318AD8u;
    {
        const bool branch_taken_0x318ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x318ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318AD8u;
            // 0x318adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ad8) {
            ctx->pc = 0x318E00u;
            goto label_318e00;
        }
    }
    ctx->pc = 0x318AE0u;
label_318ae0:
    // 0x318ae0: 0xc0c5ea4  jal         func_317A90
label_318ae4:
    if (ctx->pc == 0x318AE4u) {
        ctx->pc = 0x318AE4u;
            // 0x318ae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318AE8u;
        goto label_318ae8;
    }
    ctx->pc = 0x318AE0u;
    SET_GPR_U32(ctx, 31, 0x318AE8u);
    ctx->pc = 0x318AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318AE0u;
            // 0x318ae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317A90u;
    if (runtime->hasFunction(0x317A90u)) {
        auto targetFn = runtime->lookupFunction(0x317A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318AE8u; }
        if (ctx->pc != 0x318AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColorType__FP10CEditPartsi_0x317a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318AE8u; }
        if (ctx->pc != 0x318AE8u) { return; }
    }
    ctx->pc = 0x318AE8u;
label_318ae8:
    // 0x318ae8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x318ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_318aec:
    // 0x318aec: 0x144300c4  bne         $v0, $v1, . + 4 + (0xC4 << 2)
label_318af0:
    if (ctx->pc == 0x318AF0u) {
        ctx->pc = 0x318AF0u;
            // 0x318af0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318AF4u;
        goto label_318af4;
    }
    ctx->pc = 0x318AECu;
    {
        const bool branch_taken_0x318aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x318AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318AECu;
            // 0x318af0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318aec) {
            ctx->pc = 0x318E00u;
            goto label_318e00;
        }
    }
    ctx->pc = 0x318AF4u;
label_318af4:
    // 0x318af4: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_318af8:
    if (ctx->pc == 0x318AF8u) {
        ctx->pc = 0x318AFCu;
        goto label_318afc;
    }
    ctx->pc = 0x318AF4u;
    {
        const bool branch_taken_0x318af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318af4) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318AFCu;
label_318afc:
    // 0x318afc: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_318b00:
    if (ctx->pc == 0x318B00u) {
        ctx->pc = 0x318B00u;
            // 0x318b00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318B04u;
        goto label_318b04;
    }
    ctx->pc = 0x318AFCu;
    {
        const bool branch_taken_0x318afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318AFCu;
            // 0x318b00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318afc) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318B04u;
label_318b04:
    // 0x318b04: 0x100000bf  b           . + 4 + (0xBF << 2)
label_318b08:
    if (ctx->pc == 0x318B08u) {
        ctx->pc = 0x318B08u;
            // 0x318b08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318B0Cu;
        goto label_318b0c;
    }
    ctx->pc = 0x318B04u;
    {
        const bool branch_taken_0x318b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318B04u;
            // 0x318b08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b04) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318B0Cu;
label_318b0c:
    // 0x318b0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x318b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_318b10:
    // 0x318b10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318b14:
    // 0x318b14: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x318b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_318b18:
    // 0x318b18: 0xc0bba48  jal         func_2EE920
label_318b1c:
    if (ctx->pc == 0x318B1Cu) {
        ctx->pc = 0x318B1Cu;
            // 0x318b1c: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x318B20u;
        goto label_318b20;
    }
    ctx->pc = 0x318B18u;
    SET_GPR_U32(ctx, 31, 0x318B20u);
    ctx->pc = 0x318B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318B18u;
            // 0x318b1c: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE920u;
    if (runtime->hasFunction(0x2EE920u)) {
        auto targetFn = runtime->lookupFunction(0x2EE920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318B20u; }
        if (ctx->pc != 0x318B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTerritoryParts__8CEditMapFiPii_0x2ee920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318B20u; }
        if (ctx->pc != 0x318B20u) { return; }
    }
    ctx->pc = 0x318B20u;
label_318b20:
    // 0x318b20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x318b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318b24:
    // 0x318b24: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x318b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_318b28:
    // 0x318b28: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x318b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_318b2c:
    // 0x318b2c: 0xc0c5aa0  jal         func_316A80
label_318b30:
    if (ctx->pc == 0x318B30u) {
        ctx->pc = 0x318B30u;
            // 0x318b30: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318B34u;
        goto label_318b34;
    }
    ctx->pc = 0x318B2Cu;
    SET_GPR_U32(ctx, 31, 0x318B34u);
    ctx->pc = 0x318B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318B2Cu;
            // 0x318b30: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316A80u;
    if (runtime->hasFunction(0x316A80u)) {
        auto targetFn = runtime->lookupFunction(0x316A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318B34u; }
        if (ctx->pc != 0x318B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountPartsType__FiP8CEditMapPii_0x316a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318B34u; }
        if (ctx->pc != 0x318B34u) { return; }
    }
    ctx->pc = 0x318B34u;
label_318b34:
    // 0x318b34: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x318b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_318b38:
    // 0x318b38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x318b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_318b3c:
    // 0x318b3c: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_318b40:
    if (ctx->pc == 0x318B40u) {
        ctx->pc = 0x318B40u;
            // 0x318b40: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x318B44u;
        goto label_318b44;
    }
    ctx->pc = 0x318B3Cu;
    {
        const bool branch_taken_0x318b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318B3Cu;
            // 0x318b40: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b3c) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318B44u;
label_318b44:
    // 0x318b44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x318b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_318b48:
    // 0x318b48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318b4c:
    // 0x318b4c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x318b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_318b50:
    // 0x318b50: 0xc0bba48  jal         func_2EE920
label_318b54:
    if (ctx->pc == 0x318B54u) {
        ctx->pc = 0x318B54u;
            // 0x318b54: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x318B58u;
        goto label_318b58;
    }
    ctx->pc = 0x318B50u;
    SET_GPR_U32(ctx, 31, 0x318B58u);
    ctx->pc = 0x318B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318B50u;
            // 0x318b54: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE920u;
    if (runtime->hasFunction(0x2EE920u)) {
        auto targetFn = runtime->lookupFunction(0x2EE920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318B58u; }
        if (ctx->pc != 0x318B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTerritoryParts__8CEditMapFiPii_0x2ee920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318B58u; }
        if (ctx->pc != 0x318B58u) { return; }
    }
    ctx->pc = 0x318B58u;
label_318b58:
    // 0x318b58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x318b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318b5c:
    // 0x318b5c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x318b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_318b60:
    // 0x318b60: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x318b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_318b64:
    // 0x318b64: 0xc0c5ad0  jal         func_316B40
label_318b68:
    if (ctx->pc == 0x318B68u) {
        ctx->pc = 0x318B68u;
            // 0x318b68: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318B6Cu;
        goto label_318b6c;
    }
    ctx->pc = 0x318B64u;
    SET_GPR_U32(ctx, 31, 0x318B6Cu);
    ctx->pc = 0x318B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318B64u;
            // 0x318b68: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316B40u;
    if (runtime->hasFunction(0x316B40u)) {
        auto targetFn = runtime->lookupFunction(0x316B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318B6Cu; }
        if (ctx->pc != 0x318B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountPartsInfoID__FiP8CEditMapPii_0x316b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318B6Cu; }
        if (ctx->pc != 0x318B6Cu) { return; }
    }
    ctx->pc = 0x318B6Cu;
label_318b6c:
    // 0x318b6c: 0x184000a4  blez        $v0, . + 4 + (0xA4 << 2)
label_318b70:
    if (ctx->pc == 0x318B70u) {
        ctx->pc = 0x318B70u;
            // 0x318b70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318B74u;
        goto label_318b74;
    }
    ctx->pc = 0x318B6Cu;
    {
        const bool branch_taken_0x318b6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x318B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318B6Cu;
            // 0x318b70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b6c) {
            ctx->pc = 0x318E00u;
            goto label_318e00;
        }
    }
    ctx->pc = 0x318B74u;
label_318b74:
    // 0x318b74: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_318b78:
    if (ctx->pc == 0x318B78u) {
        ctx->pc = 0x318B7Cu;
        goto label_318b7c;
    }
    ctx->pc = 0x318B74u;
    {
        const bool branch_taken_0x318b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318b74) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318B7Cu;
label_318b7c:
    // 0x318b7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x318b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_318b80:
    // 0x318b80: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
label_318b84:
    if (ctx->pc == 0x318B84u) {
        ctx->pc = 0x318B84u;
            // 0x318b84: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->pc = 0x318B88u;
        goto label_318b88;
    }
    ctx->pc = 0x318B80u;
    {
        const bool branch_taken_0x318b80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x318B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318B80u;
            // 0x318b84: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b80) {
            ctx->pc = 0x318B90u;
            goto label_318b90;
        }
    }
    ctx->pc = 0x318B88u;
label_318b88:
    // 0x318b88: 0x1000009e  b           . + 4 + (0x9E << 2)
label_318b8c:
    if (ctx->pc == 0x318B8Cu) {
        ctx->pc = 0x318B8Cu;
            // 0x318b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318B90u;
        goto label_318b90;
    }
    ctx->pc = 0x318B88u;
    {
        const bool branch_taken_0x318b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318B88u;
            // 0x318b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b88) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318B90u;
label_318b90:
    // 0x318b90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318b94:
    // 0x318b94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x318b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_318b98:
    // 0x318b98: 0xc0a5b68  jal         func_296DA0
label_318b9c:
    if (ctx->pc == 0x318B9Cu) {
        ctx->pc = 0x318B9Cu;
            // 0x318b9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318BA0u;
        goto label_318ba0;
    }
    ctx->pc = 0x318B98u;
    SET_GPR_U32(ctx, 31, 0x318BA0u);
    ctx->pc = 0x318B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318B98u;
            // 0x318b9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296DA0u;
    if (runtime->hasFunction(0x296DA0u)) {
        auto targetFn = runtime->lookupFunction(0x296DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318BA0u; }
        if (ctx->pc != 0x318BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverNum__8CEditMapFif_0x296da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318BA0u; }
        if (ctx->pc != 0x318BA0u) { return; }
    }
    ctx->pc = 0x318BA0u;
label_318ba0:
    // 0x318ba0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x318ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_318ba4:
    // 0x318ba4: 0x10000097  b           . + 4 + (0x97 << 2)
label_318ba8:
    if (ctx->pc == 0x318BA8u) {
        ctx->pc = 0x318BA8u;
            // 0x318ba8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x318BACu;
        goto label_318bac;
    }
    ctx->pc = 0x318BA4u;
    {
        const bool branch_taken_0x318ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318BA4u;
            // 0x318ba8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ba4) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318BACu;
label_318bac:
    // 0x318bac: 0x10000095  b           . + 4 + (0x95 << 2)
label_318bb0:
    if (ctx->pc == 0x318BB0u) {
        ctx->pc = 0x318BB0u;
            // 0x318bb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318BB4u;
        goto label_318bb4;
    }
    ctx->pc = 0x318BACu;
    {
        const bool branch_taken_0x318bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318BACu;
            // 0x318bb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318bac) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318BB4u;
label_318bb4:
    // 0x318bb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x318bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_318bb8:
    // 0x318bb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318bbc:
    // 0x318bbc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x318bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_318bc0:
    // 0x318bc0: 0xc0bba48  jal         func_2EE920
label_318bc4:
    if (ctx->pc == 0x318BC4u) {
        ctx->pc = 0x318BC4u;
            // 0x318bc4: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x318BC8u;
        goto label_318bc8;
    }
    ctx->pc = 0x318BC0u;
    SET_GPR_U32(ctx, 31, 0x318BC8u);
    ctx->pc = 0x318BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318BC0u;
            // 0x318bc4: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE920u;
    if (runtime->hasFunction(0x2EE920u)) {
        auto targetFn = runtime->lookupFunction(0x2EE920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318BC8u; }
        if (ctx->pc != 0x318BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTerritoryParts__8CEditMapFiPii_0x2ee920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318BC8u; }
        if (ctx->pc != 0x318BC8u) { return; }
    }
    ctx->pc = 0x318BC8u;
label_318bc8:
    // 0x318bc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x318bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318bcc:
    // 0x318bcc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x318bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_318bd0:
    // 0x318bd0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x318bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_318bd4:
    // 0x318bd4: 0xc0c5ad0  jal         func_316B40
label_318bd8:
    if (ctx->pc == 0x318BD8u) {
        ctx->pc = 0x318BD8u;
            // 0x318bd8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318BDCu;
        goto label_318bdc;
    }
    ctx->pc = 0x318BD4u;
    SET_GPR_U32(ctx, 31, 0x318BDCu);
    ctx->pc = 0x318BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318BD4u;
            // 0x318bd8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316B40u;
    if (runtime->hasFunction(0x316B40u)) {
        auto targetFn = runtime->lookupFunction(0x316B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318BDCu; }
        if (ctx->pc != 0x318BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountPartsInfoID__FiP8CEditMapPii_0x316b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318BDCu; }
        if (ctx->pc != 0x318BDCu) { return; }
    }
    ctx->pc = 0x318BDCu;
label_318bdc:
    // 0x318bdc: 0x18400088  blez        $v0, . + 4 + (0x88 << 2)
label_318be0:
    if (ctx->pc == 0x318BE0u) {
        ctx->pc = 0x318BE0u;
            // 0x318be0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318BE4u;
        goto label_318be4;
    }
    ctx->pc = 0x318BDCu;
    {
        const bool branch_taken_0x318bdc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x318BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318BDCu;
            // 0x318be0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318bdc) {
            ctx->pc = 0x318E00u;
            goto label_318e00;
        }
    }
    ctx->pc = 0x318BE4u;
label_318be4:
    // 0x318be4: 0x10000087  b           . + 4 + (0x87 << 2)
label_318be8:
    if (ctx->pc == 0x318BE8u) {
        ctx->pc = 0x318BECu;
        goto label_318bec;
    }
    ctx->pc = 0x318BE4u;
    {
        const bool branch_taken_0x318be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318be4) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318BECu;
label_318bec:
    // 0x318bec: 0x10000085  b           . + 4 + (0x85 << 2)
label_318bf0:
    if (ctx->pc == 0x318BF0u) {
        ctx->pc = 0x318BF0u;
            // 0x318bf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318BF4u;
        goto label_318bf4;
    }
    ctx->pc = 0x318BECu;
    {
        const bool branch_taken_0x318bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318BECu;
            // 0x318bf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318bec) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318BF4u;
label_318bf4:
    // 0x318bf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x318bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_318bf8:
    // 0x318bf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318bfc:
    // 0x318bfc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x318bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_318c00:
    // 0x318c00: 0xc0bba48  jal         func_2EE920
label_318c04:
    if (ctx->pc == 0x318C04u) {
        ctx->pc = 0x318C04u;
            // 0x318c04: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x318C08u;
        goto label_318c08;
    }
    ctx->pc = 0x318C00u;
    SET_GPR_U32(ctx, 31, 0x318C08u);
    ctx->pc = 0x318C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318C00u;
            // 0x318c04: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE920u;
    if (runtime->hasFunction(0x2EE920u)) {
        auto targetFn = runtime->lookupFunction(0x2EE920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318C08u; }
        if (ctx->pc != 0x318C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTerritoryParts__8CEditMapFiPii_0x2ee920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318C08u; }
        if (ctx->pc != 0x318C08u) { return; }
    }
    ctx->pc = 0x318C08u;
label_318c08:
    // 0x318c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x318c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318c0c:
    // 0x318c0c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x318c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_318c10:
    // 0x318c10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x318c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318c14:
    // 0x318c14: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x318c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_318c18:
    // 0x318c18: 0xc0c5aa0  jal         func_316A80
label_318c1c:
    if (ctx->pc == 0x318C1Cu) {
        ctx->pc = 0x318C1Cu;
            // 0x318c1c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318C20u;
        goto label_318c20;
    }
    ctx->pc = 0x318C18u;
    SET_GPR_U32(ctx, 31, 0x318C20u);
    ctx->pc = 0x318C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318C18u;
            // 0x318c1c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316A80u;
    if (runtime->hasFunction(0x316A80u)) {
        auto targetFn = runtime->lookupFunction(0x316A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318C20u; }
        if (ctx->pc != 0x318C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountPartsType__FiP8CEditMapPii_0x316a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318C20u; }
        if (ctx->pc != 0x318C20u) { return; }
    }
    ctx->pc = 0x318C20u;
label_318c20:
    // 0x318c20: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x318c20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_318c24:
    // 0x318c24: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_318c28:
    if (ctx->pc == 0x318C28u) {
        ctx->pc = 0x318C28u;
            // 0x318c28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318C2Cu;
        goto label_318c2c;
    }
    ctx->pc = 0x318C24u;
    {
        const bool branch_taken_0x318c24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318C24u;
            // 0x318c28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c24) {
            ctx->pc = 0x318C34u;
            goto label_318c34;
        }
    }
    ctx->pc = 0x318C2Cu;
label_318c2c:
    // 0x318c2c: 0x10000075  b           . + 4 + (0x75 << 2)
label_318c30:
    if (ctx->pc == 0x318C30u) {
        ctx->pc = 0x318C30u;
            // 0x318c30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318C34u;
        goto label_318c34;
    }
    ctx->pc = 0x318C2Cu;
    {
        const bool branch_taken_0x318c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318C2Cu;
            // 0x318c30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c2c) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318C34u;
label_318c34:
    // 0x318c34: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x318c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_318c38:
    // 0x318c38: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x318c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_318c3c:
    // 0x318c3c: 0xc0c5aa0  jal         func_316A80
label_318c40:
    if (ctx->pc == 0x318C40u) {
        ctx->pc = 0x318C40u;
            // 0x318c40: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x318C44u;
        goto label_318c44;
    }
    ctx->pc = 0x318C3Cu;
    SET_GPR_U32(ctx, 31, 0x318C44u);
    ctx->pc = 0x318C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318C3Cu;
            // 0x318c40: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316A80u;
    if (runtime->hasFunction(0x316A80u)) {
        auto targetFn = runtime->lookupFunction(0x316A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318C44u; }
        if (ctx->pc != 0x318C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountPartsType__FiP8CEditMapPii_0x316a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318C44u; }
        if (ctx->pc != 0x318C44u) { return; }
    }
    ctx->pc = 0x318C44u;
label_318c44:
    // 0x318c44: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x318c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_318c48:
    // 0x318c48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x318c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_318c4c:
    // 0x318c4c: 0x1000006d  b           . + 4 + (0x6D << 2)
label_318c50:
    if (ctx->pc == 0x318C50u) {
        ctx->pc = 0x318C50u;
            // 0x318c50: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x318C54u;
        goto label_318c54;
    }
    ctx->pc = 0x318C4Cu;
    {
        const bool branch_taken_0x318c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318C4Cu;
            // 0x318c50: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c4c) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318C54u;
label_318c54:
    // 0x318c54: 0xc06d694  jal         func_1B5A50
label_318c58:
    if (ctx->pc == 0x318C58u) {
        ctx->pc = 0x318C58u;
            // 0x318c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318C5Cu;
        goto label_318c5c;
    }
    ctx->pc = 0x318C54u;
    SET_GPR_U32(ctx, 31, 0x318C5Cu);
    ctx->pc = 0x318C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318C54u;
            // 0x318c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A50u;
    if (runtime->hasFunction(0x1B5A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318C5Cu; }
        if (ctx->pc != 0x318C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInfoID__10CEditPartsFv_0x1b5a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318C5Cu; }
        if (ctx->pc != 0x318C5Cu) { return; }
    }
    ctx->pc = 0x318C5Cu;
label_318c5c:
    // 0x318c5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x318c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318c60:
    // 0x318c60: 0x10430067  beq         $v0, $v1, . + 4 + (0x67 << 2)
label_318c64:
    if (ctx->pc == 0x318C64u) {
        ctx->pc = 0x318C64u;
            // 0x318c64: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318C68u;
        goto label_318c68;
    }
    ctx->pc = 0x318C60u;
    {
        const bool branch_taken_0x318c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x318C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318C60u;
            // 0x318c64: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c60) {
            ctx->pc = 0x318E00u;
            goto label_318e00;
        }
    }
    ctx->pc = 0x318C68u;
label_318c68:
    // 0x318c68: 0x10000066  b           . + 4 + (0x66 << 2)
label_318c6c:
    if (ctx->pc == 0x318C6Cu) {
        ctx->pc = 0x318C70u;
        goto label_318c70;
    }
    ctx->pc = 0x318C68u;
    {
        const bool branch_taken_0x318c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318c68) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318C70u;
label_318c70:
    // 0x318c70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318c74:
    // 0x318c74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x318c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_318c78:
    // 0x318c78: 0xc0aa608  jal         func_2A9820
label_318c7c:
    if (ctx->pc == 0x318C7Cu) {
        ctx->pc = 0x318C7Cu;
            // 0x318c7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318C80u;
        goto label_318c80;
    }
    ctx->pc = 0x318C78u;
    SET_GPR_U32(ctx, 31, 0x318C80u);
    ctx->pc = 0x318C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318C78u;
            // 0x318c7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9820u;
    if (runtime->hasFunction(0x2A9820u)) {
        auto targetFn = runtime->lookupFunction(0x2A9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318C80u; }
        if (ctx->pc != 0x318C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CultureAnalyzeParts__8CEditMapFii_0x2a9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318C80u; }
        if (ctx->pc != 0x318C80u) { return; }
    }
    ctx->pc = 0x318C80u;
label_318c80:
    // 0x318c80: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x318c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_318c84:
    // 0x318c84: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
label_318c88:
    if (ctx->pc == 0x318C88u) {
        ctx->pc = 0x318C88u;
            // 0x318c88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318C8Cu;
        goto label_318c8c;
    }
    ctx->pc = 0x318C84u;
    {
        const bool branch_taken_0x318c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318C84u;
            // 0x318c88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c84) {
            ctx->pc = 0x318E00u;
            goto label_318e00;
        }
    }
    ctx->pc = 0x318C8Cu;
label_318c8c:
    // 0x318c8c: 0x1000005d  b           . + 4 + (0x5D << 2)
label_318c90:
    if (ctx->pc == 0x318C90u) {
        ctx->pc = 0x318C94u;
        goto label_318c94;
    }
    ctx->pc = 0x318C8Cu;
    {
        const bool branch_taken_0x318c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318c8c) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318C94u;
label_318c94:
    // 0x318c94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x318c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_318c98:
    // 0x318c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318c9c:
    // 0x318c9c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x318c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_318ca0:
    // 0x318ca0: 0xc0bba48  jal         func_2EE920
label_318ca4:
    if (ctx->pc == 0x318CA4u) {
        ctx->pc = 0x318CA4u;
            // 0x318ca4: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x318CA8u;
        goto label_318ca8;
    }
    ctx->pc = 0x318CA0u;
    SET_GPR_U32(ctx, 31, 0x318CA8u);
    ctx->pc = 0x318CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318CA0u;
            // 0x318ca4: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE920u;
    if (runtime->hasFunction(0x2EE920u)) {
        auto targetFn = runtime->lookupFunction(0x2EE920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318CA8u; }
        if (ctx->pc != 0x318CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTerritoryParts__8CEditMapFiPii_0x2ee920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318CA8u; }
        if (ctx->pc != 0x318CA8u) { return; }
    }
    ctx->pc = 0x318CA8u;
label_318ca8:
    // 0x318ca8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x318ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318cac:
    // 0x318cac: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x318cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_318cb0:
    // 0x318cb0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x318cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_318cb4:
    // 0x318cb4: 0xc0c5ad0  jal         func_316B40
label_318cb8:
    if (ctx->pc == 0x318CB8u) {
        ctx->pc = 0x318CB8u;
            // 0x318cb8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318CBCu;
        goto label_318cbc;
    }
    ctx->pc = 0x318CB4u;
    SET_GPR_U32(ctx, 31, 0x318CBCu);
    ctx->pc = 0x318CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318CB4u;
            // 0x318cb8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316B40u;
    if (runtime->hasFunction(0x316B40u)) {
        auto targetFn = runtime->lookupFunction(0x316B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318CBCu; }
        if (ctx->pc != 0x318CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountPartsInfoID__FiP8CEditMapPii_0x316b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318CBCu; }
        if (ctx->pc != 0x318CBCu) { return; }
    }
    ctx->pc = 0x318CBCu;
label_318cbc:
    // 0x318cbc: 0x18400050  blez        $v0, . + 4 + (0x50 << 2)
label_318cc0:
    if (ctx->pc == 0x318CC0u) {
        ctx->pc = 0x318CC0u;
            // 0x318cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318CC4u;
        goto label_318cc4;
    }
    ctx->pc = 0x318CBCu;
    {
        const bool branch_taken_0x318cbc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x318CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318CBCu;
            // 0x318cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318cbc) {
            ctx->pc = 0x318E00u;
            goto label_318e00;
        }
    }
    ctx->pc = 0x318CC4u;
label_318cc4:
    // 0x318cc4: 0x1000004f  b           . + 4 + (0x4F << 2)
label_318cc8:
    if (ctx->pc == 0x318CC8u) {
        ctx->pc = 0x318CCCu;
        goto label_318ccc;
    }
    ctx->pc = 0x318CC4u;
    {
        const bool branch_taken_0x318cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318cc4) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318CCCu;
label_318ccc:
    // 0x318ccc: 0xc06d694  jal         func_1B5A50
label_318cd0:
    if (ctx->pc == 0x318CD0u) {
        ctx->pc = 0x318CD0u;
            // 0x318cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318CD4u;
        goto label_318cd4;
    }
    ctx->pc = 0x318CCCu;
    SET_GPR_U32(ctx, 31, 0x318CD4u);
    ctx->pc = 0x318CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318CCCu;
            // 0x318cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A50u;
    if (runtime->hasFunction(0x1B5A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318CD4u; }
        if (ctx->pc != 0x318CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInfoID__10CEditPartsFv_0x1b5a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318CD4u; }
        if (ctx->pc != 0x318CD4u) { return; }
    }
    ctx->pc = 0x318CD4u;
label_318cd4:
    // 0x318cd4: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x318cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_318cd8:
    // 0x318cd8: 0x14430049  bne         $v0, $v1, . + 4 + (0x49 << 2)
label_318cdc:
    if (ctx->pc == 0x318CDCu) {
        ctx->pc = 0x318CDCu;
            // 0x318cdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318CE0u;
        goto label_318ce0;
    }
    ctx->pc = 0x318CD8u;
    {
        const bool branch_taken_0x318cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x318CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318CD8u;
            // 0x318cdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318cd8) {
            ctx->pc = 0x318E00u;
            goto label_318e00;
        }
    }
    ctx->pc = 0x318CE0u;
label_318ce0:
    // 0x318ce0: 0x10000048  b           . + 4 + (0x48 << 2)
label_318ce4:
    if (ctx->pc == 0x318CE4u) {
        ctx->pc = 0x318CE8u;
        goto label_318ce8;
    }
    ctx->pc = 0x318CE0u;
    {
        const bool branch_taken_0x318ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318ce0) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318CE8u;
label_318ce8:
    // 0x318ce8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x318ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_318cec:
    // 0x318cec: 0x1682000b  bne         $s4, $v0, . + 4 + (0xB << 2)
label_318cf0:
    if (ctx->pc == 0x318CF0u) {
        ctx->pc = 0x318CF4u;
        goto label_318cf4;
    }
    ctx->pc = 0x318CECu;
    {
        const bool branch_taken_0x318cec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x318cec) {
            ctx->pc = 0x318D1Cu;
            goto label_318d1c;
        }
    }
    ctx->pc = 0x318CF4u;
label_318cf4:
    // 0x318cf4: 0xc7a10874  lwc1        $f1, 0x874($sp)
    ctx->pc = 0x318cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318cf8:
    // 0x318cf8: 0x3c024306  lui         $v0, 0x4306
    ctx->pc = 0x318cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17158 << 16));
label_318cfc:
    // 0x318cfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318d00:
    // 0x318d00: 0x0  nop
    ctx->pc = 0x318d00u;
    // NOP
label_318d04:
    // 0x318d04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x318d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318d08:
    // 0x318d08: 0x0  nop
    ctx->pc = 0x318d08u;
    // NOP
label_318d0c:
    // 0x318d0c: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
label_318d10:
    if (ctx->pc == 0x318D10u) {
        ctx->pc = 0x318D10u;
            // 0x318d10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318D14u;
        goto label_318d14;
    }
    ctx->pc = 0x318D0Cu;
    {
        const bool branch_taken_0x318d0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x318D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318D0Cu;
            // 0x318d10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d0c) {
            ctx->pc = 0x318E00u;
            goto label_318e00;
        }
    }
    ctx->pc = 0x318D14u;
label_318d14:
    // 0x318d14: 0x1000003b  b           . + 4 + (0x3B << 2)
label_318d18:
    if (ctx->pc == 0x318D18u) {
        ctx->pc = 0x318D1Cu;
        goto label_318d1c;
    }
    ctx->pc = 0x318D14u;
    {
        const bool branch_taken_0x318d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318d14) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318D1Cu;
label_318d1c:
    // 0x318d1c: 0xc7a10874  lwc1        $f1, 0x874($sp)
    ctx->pc = 0x318d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318d20:
    // 0x318d20: 0x3c0242a8  lui         $v0, 0x42A8
    ctx->pc = 0x318d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17064 << 16));
label_318d24:
    // 0x318d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318d28:
    // 0x318d28: 0x0  nop
    ctx->pc = 0x318d28u;
    // NOP
label_318d2c:
    // 0x318d2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x318d2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318d30:
    // 0x318d30: 0x0  nop
    ctx->pc = 0x318d30u;
    // NOP
label_318d34:
    // 0x318d34: 0x45010032  bc1t        . + 4 + (0x32 << 2)
label_318d38:
    if (ctx->pc == 0x318D38u) {
        ctx->pc = 0x318D38u;
            // 0x318d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318D3Cu;
        goto label_318d3c;
    }
    ctx->pc = 0x318D34u;
    {
        const bool branch_taken_0x318d34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x318D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318D34u;
            // 0x318d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d34) {
            ctx->pc = 0x318E00u;
            goto label_318e00;
        }
    }
    ctx->pc = 0x318D3Cu;
label_318d3c:
    // 0x318d3c: 0x10000031  b           . + 4 + (0x31 << 2)
label_318d40:
    if (ctx->pc == 0x318D40u) {
        ctx->pc = 0x318D44u;
        goto label_318d44;
    }
    ctx->pc = 0x318D3Cu;
    {
        const bool branch_taken_0x318d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318d3c) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318D44u;
label_318d44:
    // 0x318d44: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x318d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_318d48:
    // 0x318d48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318d4c:
    // 0x318d4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x318d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_318d50:
    // 0x318d50: 0xc0a5b68  jal         func_296DA0
label_318d54:
    if (ctx->pc == 0x318D54u) {
        ctx->pc = 0x318D54u;
            // 0x318d54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318D58u;
        goto label_318d58;
    }
    ctx->pc = 0x318D50u;
    SET_GPR_U32(ctx, 31, 0x318D58u);
    ctx->pc = 0x318D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318D50u;
            // 0x318d54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296DA0u;
    if (runtime->hasFunction(0x296DA0u)) {
        auto targetFn = runtime->lookupFunction(0x296DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318D58u; }
        if (ctx->pc != 0x318D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverNum__8CEditMapFif_0x296da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318D58u; }
        if (ctx->pc != 0x318D58u) { return; }
    }
    ctx->pc = 0x318D58u;
label_318d58:
    // 0x318d58: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x318d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_318d5c:
    // 0x318d5c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_318d60:
    if (ctx->pc == 0x318D60u) {
        ctx->pc = 0x318D60u;
            // 0x318d60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318D64u;
        goto label_318d64;
    }
    ctx->pc = 0x318D5Cu;
    {
        const bool branch_taken_0x318d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318D5Cu;
            // 0x318d60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d5c) {
            ctx->pc = 0x318E00u;
            goto label_318e00;
        }
    }
    ctx->pc = 0x318D64u;
label_318d64:
    // 0x318d64: 0x10000027  b           . + 4 + (0x27 << 2)
label_318d68:
    if (ctx->pc == 0x318D68u) {
        ctx->pc = 0x318D6Cu;
        goto label_318d6c;
    }
    ctx->pc = 0x318D64u;
    {
        const bool branch_taken_0x318d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318d64) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318D6Cu;
label_318d6c:
    // 0x318d6c: 0x10000025  b           . + 4 + (0x25 << 2)
label_318d70:
    if (ctx->pc == 0x318D70u) {
        ctx->pc = 0x318D70u;
            // 0x318d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318D74u;
        goto label_318d74;
    }
    ctx->pc = 0x318D6Cu;
    {
        const bool branch_taken_0x318d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318D6Cu;
            // 0x318d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d6c) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318D74u;
label_318d74:
    // 0x318d74: 0x10000023  b           . + 4 + (0x23 << 2)
label_318d78:
    if (ctx->pc == 0x318D78u) {
        ctx->pc = 0x318D78u;
            // 0x318d78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318D7Cu;
        goto label_318d7c;
    }
    ctx->pc = 0x318D74u;
    {
        const bool branch_taken_0x318d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318D74u;
            // 0x318d78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d74) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318D7Cu;
label_318d7c:
    // 0x318d7c: 0x12800020  beqz        $s4, . + 4 + (0x20 << 2)
label_318d80:
    if (ctx->pc == 0x318D80u) {
        ctx->pc = 0x318D80u;
            // 0x318d80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318D84u;
        goto label_318d84;
    }
    ctx->pc = 0x318D7Cu;
    {
        const bool branch_taken_0x318d7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x318D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318D7Cu;
            // 0x318d80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d7c) {
            ctx->pc = 0x318E00u;
            goto label_318e00;
        }
    }
    ctx->pc = 0x318D84u;
label_318d84:
    // 0x318d84: 0x1000001f  b           . + 4 + (0x1F << 2)
label_318d88:
    if (ctx->pc == 0x318D88u) {
        ctx->pc = 0x318D8Cu;
        goto label_318d8c;
    }
    ctx->pc = 0x318D84u;
    {
        const bool branch_taken_0x318d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318d84) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318D8Cu;
label_318d8c:
    // 0x318d8c: 0xc06d694  jal         func_1B5A50
label_318d90:
    if (ctx->pc == 0x318D90u) {
        ctx->pc = 0x318D90u;
            // 0x318d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318D94u;
        goto label_318d94;
    }
    ctx->pc = 0x318D8Cu;
    SET_GPR_U32(ctx, 31, 0x318D94u);
    ctx->pc = 0x318D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318D8Cu;
            // 0x318d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A50u;
    if (runtime->hasFunction(0x1B5A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318D94u; }
        if (ctx->pc != 0x318D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInfoID__10CEditPartsFv_0x1b5a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318D94u; }
        if (ctx->pc != 0x318D94u) { return; }
    }
    ctx->pc = 0x318D94u;
label_318d94:
    // 0x318d94: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x318d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_318d98:
    // 0x318d98: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_318d9c:
    if (ctx->pc == 0x318D9Cu) {
        ctx->pc = 0x318D9Cu;
            // 0x318d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318DA0u;
        goto label_318da0;
    }
    ctx->pc = 0x318D98u;
    {
        const bool branch_taken_0x318d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x318D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318D98u;
            // 0x318d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d98) {
            ctx->pc = 0x318DA8u;
            goto label_318da8;
        }
    }
    ctx->pc = 0x318DA0u;
label_318da0:
    // 0x318da0: 0x10000018  b           . + 4 + (0x18 << 2)
label_318da4:
    if (ctx->pc == 0x318DA4u) {
        ctx->pc = 0x318DA4u;
            // 0x318da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318DA8u;
        goto label_318da8;
    }
    ctx->pc = 0x318DA0u;
    {
        const bool branch_taken_0x318da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318DA0u;
            // 0x318da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318da0) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318DA8u;
label_318da8:
    // 0x318da8: 0xc0c5ea4  jal         func_317A90
label_318dac:
    if (ctx->pc == 0x318DACu) {
        ctx->pc = 0x318DACu;
            // 0x318dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318DB0u;
        goto label_318db0;
    }
    ctx->pc = 0x318DA8u;
    SET_GPR_U32(ctx, 31, 0x318DB0u);
    ctx->pc = 0x318DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318DA8u;
            // 0x318dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317A90u;
    if (runtime->hasFunction(0x317A90u)) {
        auto targetFn = runtime->lookupFunction(0x317A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318DB0u; }
        if (ctx->pc != 0x318DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColorType__FP10CEditPartsi_0x317a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318DB0u; }
        if (ctx->pc != 0x318DB0u) { return; }
    }
    ctx->pc = 0x318DB0u;
label_318db0:
    // 0x318db0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x318db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_318db4:
    // 0x318db4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_318db8:
    if (ctx->pc == 0x318DB8u) {
        ctx->pc = 0x318DB8u;
            // 0x318db8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318DBCu;
        goto label_318dbc;
    }
    ctx->pc = 0x318DB4u;
    {
        const bool branch_taken_0x318db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x318DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318DB4u;
            // 0x318db8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318db4) {
            ctx->pc = 0x318DC4u;
            goto label_318dc4;
        }
    }
    ctx->pc = 0x318DBCu;
label_318dbc:
    // 0x318dbc: 0x10000011  b           . + 4 + (0x11 << 2)
label_318dc0:
    if (ctx->pc == 0x318DC0u) {
        ctx->pc = 0x318DC0u;
            // 0x318dc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318DC4u;
        goto label_318dc4;
    }
    ctx->pc = 0x318DBCu;
    {
        const bool branch_taken_0x318dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318DBCu;
            // 0x318dc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318dbc) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318DC4u;
label_318dc4:
    // 0x318dc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318dc8:
    // 0x318dc8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x318dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_318dcc:
    // 0x318dcc: 0xc0bba48  jal         func_2EE920
label_318dd0:
    if (ctx->pc == 0x318DD0u) {
        ctx->pc = 0x318DD0u;
            // 0x318dd0: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x318DD4u;
        goto label_318dd4;
    }
    ctx->pc = 0x318DCCu;
    SET_GPR_U32(ctx, 31, 0x318DD4u);
    ctx->pc = 0x318DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318DCCu;
            // 0x318dd0: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE920u;
    if (runtime->hasFunction(0x2EE920u)) {
        auto targetFn = runtime->lookupFunction(0x2EE920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318DD4u; }
        if (ctx->pc != 0x318DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTerritoryParts__8CEditMapFiPii_0x2ee920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318DD4u; }
        if (ctx->pc != 0x318DD4u) { return; }
    }
    ctx->pc = 0x318DD4u;
label_318dd4:
    // 0x318dd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x318dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318dd8:
    // 0x318dd8: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x318dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_318ddc:
    // 0x318ddc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x318ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_318de0:
    // 0x318de0: 0xc0c5ad0  jal         func_316B40
label_318de4:
    if (ctx->pc == 0x318DE4u) {
        ctx->pc = 0x318DE4u;
            // 0x318de4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318DE8u;
        goto label_318de8;
    }
    ctx->pc = 0x318DE0u;
    SET_GPR_U32(ctx, 31, 0x318DE8u);
    ctx->pc = 0x318DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318DE0u;
            // 0x318de4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316B40u;
    if (runtime->hasFunction(0x316B40u)) {
        auto targetFn = runtime->lookupFunction(0x316B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318DE8u; }
        if (ctx->pc != 0x318DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountPartsInfoID__FiP8CEditMapPii_0x316b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318DE8u; }
        if (ctx->pc != 0x318DE8u) { return; }
    }
    ctx->pc = 0x318DE8u;
label_318de8:
    // 0x318de8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_318dec:
    if (ctx->pc == 0x318DECu) {
        ctx->pc = 0x318DECu;
            // 0x318dec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318DF0u;
        goto label_318df0;
    }
    ctx->pc = 0x318DE8u;
    {
        const bool branch_taken_0x318de8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x318DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318DE8u;
            // 0x318dec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318de8) {
            ctx->pc = 0x318E00u;
            goto label_318e00;
        }
    }
    ctx->pc = 0x318DF0u;
label_318df0:
    // 0x318df0: 0x10000004  b           . + 4 + (0x4 << 2)
label_318df4:
    if (ctx->pc == 0x318DF4u) {
        ctx->pc = 0x318DF8u;
        goto label_318df8;
    }
    ctx->pc = 0x318DF0u;
    {
        const bool branch_taken_0x318df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318df0) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318DF8u;
label_318df8:
    // 0x318df8: 0x10000002  b           . + 4 + (0x2 << 2)
label_318dfc:
    if (ctx->pc == 0x318DFCu) {
        ctx->pc = 0x318DFCu;
            // 0x318dfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318E00u;
        goto label_318e00;
    }
    ctx->pc = 0x318DF8u;
    {
        const bool branch_taken_0x318df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318DF8u;
            // 0x318dfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318df8) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318E00u;
label_318e00:
    // 0x318e00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x318e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318e04:
    // 0x318e04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x318e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_318e08:
    // 0x318e08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x318e08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_318e0c:
    // 0x318e0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x318e0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_318e10:
    // 0x318e10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x318e10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_318e14:
    // 0x318e14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x318e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_318e18:
    // 0x318e18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x318e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_318e1c:
    // 0x318e1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x318e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_318e20:
    // 0x318e20: 0x3e00008  jr          $ra
label_318e24:
    if (ctx->pc == 0x318E24u) {
        ctx->pc = 0x318E24u;
            // 0x318e24: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->pc = 0x318E28u;
        goto label_fallthrough_0x318e20;
    }
    ctx->pc = 0x318E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318E20u;
            // 0x318e24: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x318e20:
    ctx->pc = 0x318E28u;
}
