#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepParam__12CActionCharaFv
// Address: 0x1719f0 - 0x171e74
void StepParam__12CActionCharaFv_0x1719f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepParam__12CActionCharaFv_0x1719f0");
#endif

    switch (ctx->pc) {
        case 0x1719f0u: goto label_1719f0;
        case 0x1719f4u: goto label_1719f4;
        case 0x1719f8u: goto label_1719f8;
        case 0x1719fcu: goto label_1719fc;
        case 0x171a00u: goto label_171a00;
        case 0x171a04u: goto label_171a04;
        case 0x171a08u: goto label_171a08;
        case 0x171a0cu: goto label_171a0c;
        case 0x171a10u: goto label_171a10;
        case 0x171a14u: goto label_171a14;
        case 0x171a18u: goto label_171a18;
        case 0x171a1cu: goto label_171a1c;
        case 0x171a20u: goto label_171a20;
        case 0x171a24u: goto label_171a24;
        case 0x171a28u: goto label_171a28;
        case 0x171a2cu: goto label_171a2c;
        case 0x171a30u: goto label_171a30;
        case 0x171a34u: goto label_171a34;
        case 0x171a38u: goto label_171a38;
        case 0x171a3cu: goto label_171a3c;
        case 0x171a40u: goto label_171a40;
        case 0x171a44u: goto label_171a44;
        case 0x171a48u: goto label_171a48;
        case 0x171a4cu: goto label_171a4c;
        case 0x171a50u: goto label_171a50;
        case 0x171a54u: goto label_171a54;
        case 0x171a58u: goto label_171a58;
        case 0x171a5cu: goto label_171a5c;
        case 0x171a60u: goto label_171a60;
        case 0x171a64u: goto label_171a64;
        case 0x171a68u: goto label_171a68;
        case 0x171a6cu: goto label_171a6c;
        case 0x171a70u: goto label_171a70;
        case 0x171a74u: goto label_171a74;
        case 0x171a78u: goto label_171a78;
        case 0x171a7cu: goto label_171a7c;
        case 0x171a80u: goto label_171a80;
        case 0x171a84u: goto label_171a84;
        case 0x171a88u: goto label_171a88;
        case 0x171a8cu: goto label_171a8c;
        case 0x171a90u: goto label_171a90;
        case 0x171a94u: goto label_171a94;
        case 0x171a98u: goto label_171a98;
        case 0x171a9cu: goto label_171a9c;
        case 0x171aa0u: goto label_171aa0;
        case 0x171aa4u: goto label_171aa4;
        case 0x171aa8u: goto label_171aa8;
        case 0x171aacu: goto label_171aac;
        case 0x171ab0u: goto label_171ab0;
        case 0x171ab4u: goto label_171ab4;
        case 0x171ab8u: goto label_171ab8;
        case 0x171abcu: goto label_171abc;
        case 0x171ac0u: goto label_171ac0;
        case 0x171ac4u: goto label_171ac4;
        case 0x171ac8u: goto label_171ac8;
        case 0x171accu: goto label_171acc;
        case 0x171ad0u: goto label_171ad0;
        case 0x171ad4u: goto label_171ad4;
        case 0x171ad8u: goto label_171ad8;
        case 0x171adcu: goto label_171adc;
        case 0x171ae0u: goto label_171ae0;
        case 0x171ae4u: goto label_171ae4;
        case 0x171ae8u: goto label_171ae8;
        case 0x171aecu: goto label_171aec;
        case 0x171af0u: goto label_171af0;
        case 0x171af4u: goto label_171af4;
        case 0x171af8u: goto label_171af8;
        case 0x171afcu: goto label_171afc;
        case 0x171b00u: goto label_171b00;
        case 0x171b04u: goto label_171b04;
        case 0x171b08u: goto label_171b08;
        case 0x171b0cu: goto label_171b0c;
        case 0x171b10u: goto label_171b10;
        case 0x171b14u: goto label_171b14;
        case 0x171b18u: goto label_171b18;
        case 0x171b1cu: goto label_171b1c;
        case 0x171b20u: goto label_171b20;
        case 0x171b24u: goto label_171b24;
        case 0x171b28u: goto label_171b28;
        case 0x171b2cu: goto label_171b2c;
        case 0x171b30u: goto label_171b30;
        case 0x171b34u: goto label_171b34;
        case 0x171b38u: goto label_171b38;
        case 0x171b3cu: goto label_171b3c;
        case 0x171b40u: goto label_171b40;
        case 0x171b44u: goto label_171b44;
        case 0x171b48u: goto label_171b48;
        case 0x171b4cu: goto label_171b4c;
        case 0x171b50u: goto label_171b50;
        case 0x171b54u: goto label_171b54;
        case 0x171b58u: goto label_171b58;
        case 0x171b5cu: goto label_171b5c;
        case 0x171b60u: goto label_171b60;
        case 0x171b64u: goto label_171b64;
        case 0x171b68u: goto label_171b68;
        case 0x171b6cu: goto label_171b6c;
        case 0x171b70u: goto label_171b70;
        case 0x171b74u: goto label_171b74;
        case 0x171b78u: goto label_171b78;
        case 0x171b7cu: goto label_171b7c;
        case 0x171b80u: goto label_171b80;
        case 0x171b84u: goto label_171b84;
        case 0x171b88u: goto label_171b88;
        case 0x171b8cu: goto label_171b8c;
        case 0x171b90u: goto label_171b90;
        case 0x171b94u: goto label_171b94;
        case 0x171b98u: goto label_171b98;
        case 0x171b9cu: goto label_171b9c;
        case 0x171ba0u: goto label_171ba0;
        case 0x171ba4u: goto label_171ba4;
        case 0x171ba8u: goto label_171ba8;
        case 0x171bacu: goto label_171bac;
        case 0x171bb0u: goto label_171bb0;
        case 0x171bb4u: goto label_171bb4;
        case 0x171bb8u: goto label_171bb8;
        case 0x171bbcu: goto label_171bbc;
        case 0x171bc0u: goto label_171bc0;
        case 0x171bc4u: goto label_171bc4;
        case 0x171bc8u: goto label_171bc8;
        case 0x171bccu: goto label_171bcc;
        case 0x171bd0u: goto label_171bd0;
        case 0x171bd4u: goto label_171bd4;
        case 0x171bd8u: goto label_171bd8;
        case 0x171bdcu: goto label_171bdc;
        case 0x171be0u: goto label_171be0;
        case 0x171be4u: goto label_171be4;
        case 0x171be8u: goto label_171be8;
        case 0x171becu: goto label_171bec;
        case 0x171bf0u: goto label_171bf0;
        case 0x171bf4u: goto label_171bf4;
        case 0x171bf8u: goto label_171bf8;
        case 0x171bfcu: goto label_171bfc;
        case 0x171c00u: goto label_171c00;
        case 0x171c04u: goto label_171c04;
        case 0x171c08u: goto label_171c08;
        case 0x171c0cu: goto label_171c0c;
        case 0x171c10u: goto label_171c10;
        case 0x171c14u: goto label_171c14;
        case 0x171c18u: goto label_171c18;
        case 0x171c1cu: goto label_171c1c;
        case 0x171c20u: goto label_171c20;
        case 0x171c24u: goto label_171c24;
        case 0x171c28u: goto label_171c28;
        case 0x171c2cu: goto label_171c2c;
        case 0x171c30u: goto label_171c30;
        case 0x171c34u: goto label_171c34;
        case 0x171c38u: goto label_171c38;
        case 0x171c3cu: goto label_171c3c;
        case 0x171c40u: goto label_171c40;
        case 0x171c44u: goto label_171c44;
        case 0x171c48u: goto label_171c48;
        case 0x171c4cu: goto label_171c4c;
        case 0x171c50u: goto label_171c50;
        case 0x171c54u: goto label_171c54;
        case 0x171c58u: goto label_171c58;
        case 0x171c5cu: goto label_171c5c;
        case 0x171c60u: goto label_171c60;
        case 0x171c64u: goto label_171c64;
        case 0x171c68u: goto label_171c68;
        case 0x171c6cu: goto label_171c6c;
        case 0x171c70u: goto label_171c70;
        case 0x171c74u: goto label_171c74;
        case 0x171c78u: goto label_171c78;
        case 0x171c7cu: goto label_171c7c;
        case 0x171c80u: goto label_171c80;
        case 0x171c84u: goto label_171c84;
        case 0x171c88u: goto label_171c88;
        case 0x171c8cu: goto label_171c8c;
        case 0x171c90u: goto label_171c90;
        case 0x171c94u: goto label_171c94;
        case 0x171c98u: goto label_171c98;
        case 0x171c9cu: goto label_171c9c;
        case 0x171ca0u: goto label_171ca0;
        case 0x171ca4u: goto label_171ca4;
        case 0x171ca8u: goto label_171ca8;
        case 0x171cacu: goto label_171cac;
        case 0x171cb0u: goto label_171cb0;
        case 0x171cb4u: goto label_171cb4;
        case 0x171cb8u: goto label_171cb8;
        case 0x171cbcu: goto label_171cbc;
        case 0x171cc0u: goto label_171cc0;
        case 0x171cc4u: goto label_171cc4;
        case 0x171cc8u: goto label_171cc8;
        case 0x171cccu: goto label_171ccc;
        case 0x171cd0u: goto label_171cd0;
        case 0x171cd4u: goto label_171cd4;
        case 0x171cd8u: goto label_171cd8;
        case 0x171cdcu: goto label_171cdc;
        case 0x171ce0u: goto label_171ce0;
        case 0x171ce4u: goto label_171ce4;
        case 0x171ce8u: goto label_171ce8;
        case 0x171cecu: goto label_171cec;
        case 0x171cf0u: goto label_171cf0;
        case 0x171cf4u: goto label_171cf4;
        case 0x171cf8u: goto label_171cf8;
        case 0x171cfcu: goto label_171cfc;
        case 0x171d00u: goto label_171d00;
        case 0x171d04u: goto label_171d04;
        case 0x171d08u: goto label_171d08;
        case 0x171d0cu: goto label_171d0c;
        case 0x171d10u: goto label_171d10;
        case 0x171d14u: goto label_171d14;
        case 0x171d18u: goto label_171d18;
        case 0x171d1cu: goto label_171d1c;
        case 0x171d20u: goto label_171d20;
        case 0x171d24u: goto label_171d24;
        case 0x171d28u: goto label_171d28;
        case 0x171d2cu: goto label_171d2c;
        case 0x171d30u: goto label_171d30;
        case 0x171d34u: goto label_171d34;
        case 0x171d38u: goto label_171d38;
        case 0x171d3cu: goto label_171d3c;
        case 0x171d40u: goto label_171d40;
        case 0x171d44u: goto label_171d44;
        case 0x171d48u: goto label_171d48;
        case 0x171d4cu: goto label_171d4c;
        case 0x171d50u: goto label_171d50;
        case 0x171d54u: goto label_171d54;
        case 0x171d58u: goto label_171d58;
        case 0x171d5cu: goto label_171d5c;
        case 0x171d60u: goto label_171d60;
        case 0x171d64u: goto label_171d64;
        case 0x171d68u: goto label_171d68;
        case 0x171d6cu: goto label_171d6c;
        case 0x171d70u: goto label_171d70;
        case 0x171d74u: goto label_171d74;
        case 0x171d78u: goto label_171d78;
        case 0x171d7cu: goto label_171d7c;
        case 0x171d80u: goto label_171d80;
        case 0x171d84u: goto label_171d84;
        case 0x171d88u: goto label_171d88;
        case 0x171d8cu: goto label_171d8c;
        case 0x171d90u: goto label_171d90;
        case 0x171d94u: goto label_171d94;
        case 0x171d98u: goto label_171d98;
        case 0x171d9cu: goto label_171d9c;
        case 0x171da0u: goto label_171da0;
        case 0x171da4u: goto label_171da4;
        case 0x171da8u: goto label_171da8;
        case 0x171dacu: goto label_171dac;
        case 0x171db0u: goto label_171db0;
        case 0x171db4u: goto label_171db4;
        case 0x171db8u: goto label_171db8;
        case 0x171dbcu: goto label_171dbc;
        case 0x171dc0u: goto label_171dc0;
        case 0x171dc4u: goto label_171dc4;
        case 0x171dc8u: goto label_171dc8;
        case 0x171dccu: goto label_171dcc;
        case 0x171dd0u: goto label_171dd0;
        case 0x171dd4u: goto label_171dd4;
        case 0x171dd8u: goto label_171dd8;
        case 0x171ddcu: goto label_171ddc;
        case 0x171de0u: goto label_171de0;
        case 0x171de4u: goto label_171de4;
        case 0x171de8u: goto label_171de8;
        case 0x171decu: goto label_171dec;
        case 0x171df0u: goto label_171df0;
        case 0x171df4u: goto label_171df4;
        case 0x171df8u: goto label_171df8;
        case 0x171dfcu: goto label_171dfc;
        case 0x171e00u: goto label_171e00;
        case 0x171e04u: goto label_171e04;
        case 0x171e08u: goto label_171e08;
        case 0x171e0cu: goto label_171e0c;
        case 0x171e10u: goto label_171e10;
        case 0x171e14u: goto label_171e14;
        case 0x171e18u: goto label_171e18;
        case 0x171e1cu: goto label_171e1c;
        case 0x171e20u: goto label_171e20;
        case 0x171e24u: goto label_171e24;
        case 0x171e28u: goto label_171e28;
        case 0x171e2cu: goto label_171e2c;
        case 0x171e30u: goto label_171e30;
        case 0x171e34u: goto label_171e34;
        case 0x171e38u: goto label_171e38;
        case 0x171e3cu: goto label_171e3c;
        case 0x171e40u: goto label_171e40;
        case 0x171e44u: goto label_171e44;
        case 0x171e48u: goto label_171e48;
        case 0x171e4cu: goto label_171e4c;
        case 0x171e50u: goto label_171e50;
        case 0x171e54u: goto label_171e54;
        case 0x171e58u: goto label_171e58;
        case 0x171e5cu: goto label_171e5c;
        case 0x171e60u: goto label_171e60;
        case 0x171e64u: goto label_171e64;
        case 0x171e68u: goto label_171e68;
        case 0x171e6cu: goto label_171e6c;
        case 0x171e70u: goto label_171e70;
        default: break;
    }

    ctx->pc = 0x1719f0u;

label_1719f0:
    // 0x1719f0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1719f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1719f4:
    // 0x1719f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1719f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1719f8:
    // 0x1719f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1719f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1719fc:
    // 0x1719fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1719fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_171a00:
    // 0x171a00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x171a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171a04:
    // 0x171a04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_171a08:
    // 0x171a08: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x171a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_171a0c:
    // 0x171a0c: 0xc041c5c  jal         func_107170
label_171a10:
    if (ctx->pc == 0x171A10u) {
        ctx->pc = 0x171A10u;
            // 0x171a10: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x171A14u;
        goto label_171a14;
    }
    ctx->pc = 0x171A0Cu;
    SET_GPR_U32(ctx, 31, 0x171A14u);
    ctx->pc = 0x171A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A0Cu;
            // 0x171a10: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A14u; }
        if (ctx->pc != 0x171A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A14u; }
        if (ctx->pc != 0x171A14u) { return; }
    }
    ctx->pc = 0x171A14u;
label_171a14:
    // 0x171a14: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x171a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_171a18:
    // 0x171a18: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x171a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_171a1c:
    // 0x171a1c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x171a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_171a20:
    // 0x171a20: 0xc041c5c  jal         func_107170
label_171a24:
    if (ctx->pc == 0x171A24u) {
        ctx->pc = 0x171A24u;
            // 0x171a24: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->pc = 0x171A28u;
        goto label_171a28;
    }
    ctx->pc = 0x171A20u;
    SET_GPR_U32(ctx, 31, 0x171A28u);
    ctx->pc = 0x171A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A20u;
            // 0x171a24: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A28u; }
        if (ctx->pc != 0x171A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A28u; }
        if (ctx->pc != 0x171A28u) { return; }
    }
    ctx->pc = 0x171A28u;
label_171a28:
    // 0x171a28: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x171a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_171a2c:
    // 0x171a2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x171a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_171a30:
    // 0x171a30: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_171a34:
    if (ctx->pc == 0x171A34u) {
        ctx->pc = 0x171A34u;
            // 0x171a34: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x171A38u;
        goto label_171a38;
    }
    ctx->pc = 0x171A30u;
    {
        const bool branch_taken_0x171a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x171A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171A30u;
            // 0x171a34: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a30) {
            ctx->pc = 0x171B40u;
            goto label_171b40;
        }
    }
    ctx->pc = 0x171A38u;
label_171a38:
    // 0x171a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171a3c:
    // 0x171a3c: 0xc05af24  jal         func_16BC90
label_171a40:
    if (ctx->pc == 0x171A40u) {
        ctx->pc = 0x171A40u;
            // 0x171a40: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->pc = 0x171A44u;
        goto label_171a44;
    }
    ctx->pc = 0x171A3Cu;
    SET_GPR_U32(ctx, 31, 0x171A44u);
    ctx->pc = 0x171A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A3Cu;
            // 0x171a40: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A44u; }
        if (ctx->pc != 0x171A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A44u; }
        if (ctx->pc != 0x171A44u) { return; }
    }
    ctx->pc = 0x171A44u;
label_171a44:
    // 0x171a44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x171a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171a48:
    // 0x171a48: 0x12000051  beqz        $s0, . + 4 + (0x51 << 2)
label_171a4c:
    if (ctx->pc == 0x171A4Cu) {
        ctx->pc = 0x171A50u;
        goto label_171a50;
    }
    ctx->pc = 0x171A48u;
    {
        const bool branch_taken_0x171a48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x171a48) {
            ctx->pc = 0x171B90u;
            goto label_171b90;
        }
    }
    ctx->pc = 0x171A50u;
label_171a50:
    // 0x171a50: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x171a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_171a54:
    // 0x171a54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171a58:
    // 0x171a58: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x171a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_171a5c:
    // 0x171a5c: 0x320f809  jalr        $t9
label_171a60:
    if (ctx->pc == 0x171A60u) {
        ctx->pc = 0x171A60u;
            // 0x171a60: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x171A64u;
        goto label_171a64;
    }
    ctx->pc = 0x171A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x171A64u);
        ctx->pc = 0x171A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171A5Cu;
            // 0x171a60: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171A64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171A64u; }
            if (ctx->pc != 0x171A64u) { return; }
        }
        }
    }
    ctx->pc = 0x171A64u;
label_171a64:
    // 0x171a64: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x171a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_171a68:
    // 0x171a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171a6c:
    // 0x171a6c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x171a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_171a70:
    // 0x171a70: 0x320f809  jalr        $t9
label_171a74:
    if (ctx->pc == 0x171A74u) {
        ctx->pc = 0x171A74u;
            // 0x171a74: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x171A78u;
        goto label_171a78;
    }
    ctx->pc = 0x171A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x171A78u);
        ctx->pc = 0x171A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171A70u;
            // 0x171a74: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171A78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171A78u; }
            if (ctx->pc != 0x171A78u) { return; }
        }
        }
    }
    ctx->pc = 0x171A78u;
label_171a78:
    // 0x171a78: 0x27b00054  addiu       $s0, $sp, 0x54
    ctx->pc = 0x171a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_171a7c:
    // 0x171a7c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x171a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_171a80:
    // 0x171a80: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x171a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171a84:
    // 0x171a84: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x171a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_171a88:
    // 0x171a88: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x171a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_171a8c:
    // 0x171a8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171a90:
    // 0x171a90: 0x0  nop
    ctx->pc = 0x171a90u;
    // NOP
label_171a94:
    // 0x171a94: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x171a94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_171a98:
    // 0x171a98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x171a98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171a9c:
    // 0x171a9c: 0x0  nop
    ctx->pc = 0x171a9cu;
    // NOP
label_171aa0:
    // 0x171aa0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_171aa4:
    if (ctx->pc == 0x171AA4u) {
        ctx->pc = 0x171AA4u;
            // 0x171aa4: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x171AA8u;
        goto label_171aa8;
    }
    ctx->pc = 0x171AA0u;
    {
        const bool branch_taken_0x171aa0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x171AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171AA0u;
            // 0x171aa4: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171aa0) {
            ctx->pc = 0x171AC0u;
            goto label_171ac0;
        }
    }
    ctx->pc = 0x171AA8u;
label_171aa8:
    // 0x171aa8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x171aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_171aac:
    // 0x171aac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x171aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_171ab0:
    // 0x171ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171ab4:
    // 0x171ab4: 0x0  nop
    ctx->pc = 0x171ab4u;
    // NOP
label_171ab8:
    // 0x171ab8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x171ab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_171abc:
    // 0x171abc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x171abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_171ac0:
    // 0x171ac0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x171ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171ac4:
    // 0x171ac4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x171ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_171ac8:
    // 0x171ac8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x171ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_171acc:
    // 0x171acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171ad0:
    // 0x171ad0: 0x0  nop
    ctx->pc = 0x171ad0u;
    // NOP
label_171ad4:
    // 0x171ad4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x171ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171ad8:
    // 0x171ad8: 0x0  nop
    ctx->pc = 0x171ad8u;
    // NOP
label_171adc:
    // 0x171adc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_171ae0:
    if (ctx->pc == 0x171AE0u) {
        ctx->pc = 0x171AE4u;
        goto label_171ae4;
    }
    ctx->pc = 0x171ADCu;
    {
        const bool branch_taken_0x171adc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171adc) {
            ctx->pc = 0x171AFCu;
            goto label_171afc;
        }
    }
    ctx->pc = 0x171AE4u;
label_171ae4:
    // 0x171ae4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x171ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_171ae8:
    // 0x171ae8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x171ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_171aec:
    // 0x171aec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171af0:
    // 0x171af0: 0x0  nop
    ctx->pc = 0x171af0u;
    // NOP
label_171af4:
    // 0x171af4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x171af4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_171af8:
    // 0x171af8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x171af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_171afc:
    // 0x171afc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x171afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_171b00:
    // 0x171b00: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x171b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_171b04:
    // 0x171b04: 0x24424c50  addiu       $v0, $v0, 0x4C50
    ctx->pc = 0x171b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19536));
label_171b08:
    // 0x171b08: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x171b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_171b0c:
    // 0x171b0c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x171b0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_171b10:
    // 0x171b10: 0xc041c7a  jal         func_1071E8
label_171b14:
    if (ctx->pc == 0x171B14u) {
        ctx->pc = 0x171B14u;
            // 0x171b14: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x171B18u;
        goto label_171b18;
    }
    ctx->pc = 0x171B10u;
    SET_GPR_U32(ctx, 31, 0x171B18u);
    ctx->pc = 0x171B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B10u;
            // 0x171b14: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B18u; }
        if (ctx->pc != 0x171B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B18u; }
        if (ctx->pc != 0x171B18u) { return; }
    }
    ctx->pc = 0x171B18u;
label_171b18:
    // 0x171b18: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x171b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_171b1c:
    // 0x171b1c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x171b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_171b20:
    // 0x171b20: 0xc041cf6  jal         func_1073D8
label_171b24:
    if (ctx->pc == 0x171B24u) {
        ctx->pc = 0x171B24u;
            // 0x171b24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171B28u;
        goto label_171b28;
    }
    ctx->pc = 0x171B20u;
    SET_GPR_U32(ctx, 31, 0x171B28u);
    ctx->pc = 0x171B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B20u;
            // 0x171b24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B28u; }
        if (ctx->pc != 0x171B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B28u; }
        if (ctx->pc != 0x171B28u) { return; }
    }
    ctx->pc = 0x171B28u;
label_171b28:
    // 0x171b28: 0x26240690  addiu       $a0, $s1, 0x690
    ctx->pc = 0x171b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1680));
label_171b2c:
    // 0x171b2c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x171b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_171b30:
    // 0x171b30: 0xc041bb0  jal         func_106EC0
label_171b34:
    if (ctx->pc == 0x171B34u) {
        ctx->pc = 0x171B34u;
            // 0x171b34: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x171B38u;
        goto label_171b38;
    }
    ctx->pc = 0x171B30u;
    SET_GPR_U32(ctx, 31, 0x171B38u);
    ctx->pc = 0x171B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B30u;
            // 0x171b34: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B38u; }
        if (ctx->pc != 0x171B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B38u; }
        if (ctx->pc != 0x171B38u) { return; }
    }
    ctx->pc = 0x171B38u;
label_171b38:
    // 0x171b38: 0x10000016  b           . + 4 + (0x16 << 2)
label_171b3c:
    if (ctx->pc == 0x171B3Cu) {
        ctx->pc = 0x171B3Cu;
            // 0x171b3c: 0xae2007a4  sw          $zero, 0x7A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1956), GPR_U32(ctx, 0));
        ctx->pc = 0x171B40u;
        goto label_171b40;
    }
    ctx->pc = 0x171B38u;
    {
        const bool branch_taken_0x171b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B38u;
            // 0x171b3c: 0xae2007a4  sw          $zero, 0x7A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1956), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b38) {
            ctx->pc = 0x171B94u;
            goto label_171b94;
        }
    }
    ctx->pc = 0x171B40u;
label_171b40:
    // 0x171b40: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x171b40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_171b44:
    // 0x171b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171b48:
    // 0x171b48: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x171b48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_171b4c:
    // 0x171b4c: 0x320f809  jalr        $t9
label_171b50:
    if (ctx->pc == 0x171B50u) {
        ctx->pc = 0x171B50u;
            // 0x171b50: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x171B54u;
        goto label_171b54;
    }
    ctx->pc = 0x171B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x171B54u);
        ctx->pc = 0x171B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B4Cu;
            // 0x171b50: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171B54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171B54u; }
            if (ctx->pc != 0x171B54u) { return; }
        }
        }
    }
    ctx->pc = 0x171B54u;
label_171b54:
    // 0x171b54: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x171b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_171b58:
    // 0x171b58: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x171b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_171b5c:
    // 0x171b5c: 0x24424c60  addiu       $v0, $v0, 0x4C60
    ctx->pc = 0x171b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19552));
label_171b60:
    // 0x171b60: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x171b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_171b64:
    // 0x171b64: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x171b64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_171b68:
    // 0x171b68: 0xc041c7a  jal         func_1071E8
label_171b6c:
    if (ctx->pc == 0x171B6Cu) {
        ctx->pc = 0x171B6Cu;
            // 0x171b6c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x171B70u;
        goto label_171b70;
    }
    ctx->pc = 0x171B68u;
    SET_GPR_U32(ctx, 31, 0x171B70u);
    ctx->pc = 0x171B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B68u;
            // 0x171b6c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B70u; }
        if (ctx->pc != 0x171B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B70u; }
        if (ctx->pc != 0x171B70u) { return; }
    }
    ctx->pc = 0x171B70u;
label_171b70:
    // 0x171b70: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x171b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_171b74:
    // 0x171b74: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x171b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_171b78:
    // 0x171b78: 0xc041cf6  jal         func_1073D8
label_171b7c:
    if (ctx->pc == 0x171B7Cu) {
        ctx->pc = 0x171B7Cu;
            // 0x171b7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171B80u;
        goto label_171b80;
    }
    ctx->pc = 0x171B78u;
    SET_GPR_U32(ctx, 31, 0x171B80u);
    ctx->pc = 0x171B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B78u;
            // 0x171b7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B80u; }
        if (ctx->pc != 0x171B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B80u; }
        if (ctx->pc != 0x171B80u) { return; }
    }
    ctx->pc = 0x171B80u;
label_171b80:
    // 0x171b80: 0x26240690  addiu       $a0, $s1, 0x690
    ctx->pc = 0x171b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1680));
label_171b84:
    // 0x171b84: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x171b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_171b88:
    // 0x171b88: 0xc041bb0  jal         func_106EC0
label_171b8c:
    if (ctx->pc == 0x171B8Cu) {
        ctx->pc = 0x171B8Cu;
            // 0x171b8c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x171B90u;
        goto label_171b90;
    }
    ctx->pc = 0x171B88u;
    SET_GPR_U32(ctx, 31, 0x171B90u);
    ctx->pc = 0x171B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B88u;
            // 0x171b8c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B90u; }
        if (ctx->pc != 0x171B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B90u; }
        if (ctx->pc != 0x171B90u) { return; }
    }
    ctx->pc = 0x171B90u;
label_171b90:
    // 0x171b90: 0xae2007a4  sw          $zero, 0x7A4($s1)
    ctx->pc = 0x171b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1956), GPR_U32(ctx, 0));
label_171b94:
    // 0x171b94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171b94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171b98:
    // 0x171b98: 0xc62c07b0  lwc1        $f12, 0x7B0($s1)
    ctx->pc = 0x171b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_171b9c:
    // 0x171b9c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x171b9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171ba0:
    // 0x171ba0: 0x0  nop
    ctx->pc = 0x171ba0u;
    // NOP
label_171ba4:
    // 0x171ba4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_171ba8:
    if (ctx->pc == 0x171BA8u) {
        ctx->pc = 0x171BACu;
        goto label_171bac;
    }
    ctx->pc = 0x171BA4u;
    {
        const bool branch_taken_0x171ba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x171ba4) {
            ctx->pc = 0x171C20u;
            goto label_171c20;
        }
    }
    ctx->pc = 0x171BACu;
label_171bac:
    // 0x171bac: 0x8e2207b8  lw          $v0, 0x7B8($s1)
    ctx->pc = 0x171bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1976)));
label_171bb0:
    // 0x171bb0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_171bb4:
    if (ctx->pc == 0x171BB4u) {
        ctx->pc = 0x171BB4u;
            // 0x171bb4: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x171BB8u;
        goto label_171bb8;
    }
    ctx->pc = 0x171BB0u;
    {
        const bool branch_taken_0x171bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171BB0u;
            // 0x171bb4: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171bb0) {
            ctx->pc = 0x171C20u;
            goto label_171c20;
        }
    }
    ctx->pc = 0x171BB8u;
label_171bb8:
    // 0x171bb8: 0xc041e96  jal         func_107A58
label_171bbc:
    if (ctx->pc == 0x171BBCu) {
        ctx->pc = 0x171BBCu;
            // 0x171bbc: 0x262507a0  addiu       $a1, $s1, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
        ctx->pc = 0x171BC0u;
        goto label_171bc0;
    }
    ctx->pc = 0x171BB8u;
    SET_GPR_U32(ctx, 31, 0x171BC0u);
    ctx->pc = 0x171BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171BB8u;
            // 0x171bbc: 0x262507a0  addiu       $a1, $s1, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BC0u; }
        if (ctx->pc != 0x171BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BC0u; }
        if (ctx->pc != 0x171BC0u) { return; }
    }
    ctx->pc = 0x171BC0u;
label_171bc0:
    // 0x171bc0: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x171bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_171bc4:
    // 0x171bc4: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x171bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_171bc8:
    // 0x171bc8: 0xc041c38  jal         func_1070E0
label_171bcc:
    if (ctx->pc == 0x171BCCu) {
        ctx->pc = 0x171BCCu;
            // 0x171bcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171BD0u;
        goto label_171bd0;
    }
    ctx->pc = 0x171BC8u;
    SET_GPR_U32(ctx, 31, 0x171BD0u);
    ctx->pc = 0x171BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171BC8u;
            // 0x171bcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BD0u; }
        if (ctx->pc != 0x171BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BD0u; }
        if (ctx->pc != 0x171BD0u) { return; }
    }
    ctx->pc = 0x171BD0u;
label_171bd0:
    // 0x171bd0: 0x8e2207b8  lw          $v0, 0x7B8($s1)
    ctx->pc = 0x171bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1976)));
label_171bd4:
    // 0x171bd4: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_171bd8:
    if (ctx->pc == 0x171BD8u) {
        ctx->pc = 0x171BDCu;
        goto label_171bdc;
    }
    ctx->pc = 0x171BD4u;
    {
        const bool branch_taken_0x171bd4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x171bd4) {
            ctx->pc = 0x171C20u;
            goto label_171c20;
        }
    }
    ctx->pc = 0x171BDCu;
label_171bdc:
    // 0x171bdc: 0xc62107b0  lwc1        $f1, 0x7B0($s1)
    ctx->pc = 0x171bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171be0:
    // 0x171be0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171be4:
    // 0x171be4: 0x0  nop
    ctx->pc = 0x171be4u;
    // NOP
label_171be8:
    // 0x171be8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x171be8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171bec:
    // 0x171bec: 0x0  nop
    ctx->pc = 0x171becu;
    // NOP
label_171bf0:
    // 0x171bf0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_171bf4:
    if (ctx->pc == 0x171BF4u) {
        ctx->pc = 0x171BF8u;
        goto label_171bf8;
    }
    ctx->pc = 0x171BF0u;
    {
        const bool branch_taken_0x171bf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x171bf0) {
            ctx->pc = 0x171C04u;
            goto label_171c04;
        }
    }
    ctx->pc = 0x171BF8u;
label_171bf8:
    // 0x171bf8: 0xc62007b4  lwc1        $f0, 0x7B4($s1)
    ctx->pc = 0x171bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171bfc:
    // 0x171bfc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x171bfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_171c00:
    // 0x171c00: 0xe62007b0  swc1        $f0, 0x7B0($s1)
    ctx->pc = 0x171c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1968), bits); }
label_171c04:
    // 0x171c04: 0x8e2207b8  lw          $v0, 0x7B8($s1)
    ctx->pc = 0x171c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1976)));
label_171c08:
    // 0x171c08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x171c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_171c0c:
    // 0x171c0c: 0xae2207b8  sw          $v0, 0x7B8($s1)
    ctx->pc = 0x171c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1976), GPR_U32(ctx, 2));
label_171c10:
    // 0x171c10: 0x8e2207b8  lw          $v0, 0x7B8($s1)
    ctx->pc = 0x171c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1976)));
label_171c14:
    // 0x171c14: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_171c18:
    if (ctx->pc == 0x171C18u) {
        ctx->pc = 0x171C1Cu;
        goto label_171c1c;
    }
    ctx->pc = 0x171C14u;
    {
        const bool branch_taken_0x171c14 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x171c14) {
            ctx->pc = 0x171C20u;
            goto label_171c20;
        }
    }
    ctx->pc = 0x171C1Cu;
label_171c1c:
    // 0x171c1c: 0xae2007b0  sw          $zero, 0x7B0($s1)
    ctx->pc = 0x171c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1968), GPR_U32(ctx, 0));
label_171c20:
    // 0x171c20: 0xc62c0f54  lwc1        $f12, 0xF54($s1)
    ctx->pc = 0x171c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_171c24:
    // 0x171c24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171c28:
    // 0x171c28: 0x0  nop
    ctx->pc = 0x171c28u;
    // NOP
label_171c2c:
    // 0x171c2c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x171c2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171c30:
    // 0x171c30: 0x0  nop
    ctx->pc = 0x171c30u;
    // NOP
label_171c34:
    // 0x171c34: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_171c38:
    if (ctx->pc == 0x171C38u) {
        ctx->pc = 0x171C3Cu;
        goto label_171c3c;
    }
    ctx->pc = 0x171C34u;
    {
        const bool branch_taken_0x171c34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x171c34) {
            ctx->pc = 0x171CB0u;
            goto label_171cb0;
        }
    }
    ctx->pc = 0x171C3Cu;
label_171c3c:
    // 0x171c3c: 0x8e220f5c  lw          $v0, 0xF5C($s1)
    ctx->pc = 0x171c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3932)));
label_171c40:
    // 0x171c40: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_171c44:
    if (ctx->pc == 0x171C44u) {
        ctx->pc = 0x171C44u;
            // 0x171c44: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x171C48u;
        goto label_171c48;
    }
    ctx->pc = 0x171C40u;
    {
        const bool branch_taken_0x171c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C40u;
            // 0x171c44: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c40) {
            ctx->pc = 0x171CB0u;
            goto label_171cb0;
        }
    }
    ctx->pc = 0x171C48u;
label_171c48:
    // 0x171c48: 0xc041e96  jal         func_107A58
label_171c4c:
    if (ctx->pc == 0x171C4Cu) {
        ctx->pc = 0x171C4Cu;
            // 0x171c4c: 0x26250f40  addiu       $a1, $s1, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
        ctx->pc = 0x171C50u;
        goto label_171c50;
    }
    ctx->pc = 0x171C48u;
    SET_GPR_U32(ctx, 31, 0x171C50u);
    ctx->pc = 0x171C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171C48u;
            // 0x171c4c: 0x26250f40  addiu       $a1, $s1, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C50u; }
        if (ctx->pc != 0x171C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C50u; }
        if (ctx->pc != 0x171C50u) { return; }
    }
    ctx->pc = 0x171C50u;
label_171c50:
    // 0x171c50: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x171c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_171c54:
    // 0x171c54: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x171c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_171c58:
    // 0x171c58: 0xc041c38  jal         func_1070E0
label_171c5c:
    if (ctx->pc == 0x171C5Cu) {
        ctx->pc = 0x171C5Cu;
            // 0x171c5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171C60u;
        goto label_171c60;
    }
    ctx->pc = 0x171C58u;
    SET_GPR_U32(ctx, 31, 0x171C60u);
    ctx->pc = 0x171C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171C58u;
            // 0x171c5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C60u; }
        if (ctx->pc != 0x171C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C60u; }
        if (ctx->pc != 0x171C60u) { return; }
    }
    ctx->pc = 0x171C60u;
label_171c60:
    // 0x171c60: 0x8e220f5c  lw          $v0, 0xF5C($s1)
    ctx->pc = 0x171c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3932)));
label_171c64:
    // 0x171c64: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_171c68:
    if (ctx->pc == 0x171C68u) {
        ctx->pc = 0x171C6Cu;
        goto label_171c6c;
    }
    ctx->pc = 0x171C64u;
    {
        const bool branch_taken_0x171c64 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x171c64) {
            ctx->pc = 0x171CB0u;
            goto label_171cb0;
        }
    }
    ctx->pc = 0x171C6Cu;
label_171c6c:
    // 0x171c6c: 0xc6210f54  lwc1        $f1, 0xF54($s1)
    ctx->pc = 0x171c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171c70:
    // 0x171c70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171c70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171c74:
    // 0x171c74: 0x0  nop
    ctx->pc = 0x171c74u;
    // NOP
label_171c78:
    // 0x171c78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x171c78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171c7c:
    // 0x171c7c: 0x0  nop
    ctx->pc = 0x171c7cu;
    // NOP
label_171c80:
    // 0x171c80: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_171c84:
    if (ctx->pc == 0x171C84u) {
        ctx->pc = 0x171C88u;
        goto label_171c88;
    }
    ctx->pc = 0x171C80u;
    {
        const bool branch_taken_0x171c80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x171c80) {
            ctx->pc = 0x171C94u;
            goto label_171c94;
        }
    }
    ctx->pc = 0x171C88u;
label_171c88:
    // 0x171c88: 0xc6200f58  lwc1        $f0, 0xF58($s1)
    ctx->pc = 0x171c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171c8c:
    // 0x171c8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x171c8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_171c90:
    // 0x171c90: 0xe6200f54  swc1        $f0, 0xF54($s1)
    ctx->pc = 0x171c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3924), bits); }
label_171c94:
    // 0x171c94: 0x8e220f5c  lw          $v0, 0xF5C($s1)
    ctx->pc = 0x171c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3932)));
label_171c98:
    // 0x171c98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x171c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_171c9c:
    // 0x171c9c: 0xae220f5c  sw          $v0, 0xF5C($s1)
    ctx->pc = 0x171c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3932), GPR_U32(ctx, 2));
label_171ca0:
    // 0x171ca0: 0x8e220f5c  lw          $v0, 0xF5C($s1)
    ctx->pc = 0x171ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3932)));
label_171ca4:
    // 0x171ca4: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_171ca8:
    if (ctx->pc == 0x171CA8u) {
        ctx->pc = 0x171CACu;
        goto label_171cac;
    }
    ctx->pc = 0x171CA4u;
    {
        const bool branch_taken_0x171ca4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x171ca4) {
            ctx->pc = 0x171CB0u;
            goto label_171cb0;
        }
    }
    ctx->pc = 0x171CACu;
label_171cac:
    // 0x171cac: 0xae200f54  sw          $zero, 0xF54($s1)
    ctx->pc = 0x171cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3924), GPR_U32(ctx, 0));
label_171cb0:
    // 0x171cb0: 0x86230730  lh          $v1, 0x730($s1)
    ctx->pc = 0x171cb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1840)));
label_171cb4:
    // 0x171cb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x171cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_171cb8:
    // 0x171cb8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_171cbc:
    if (ctx->pc == 0x171CBCu) {
        ctx->pc = 0x171CBCu;
            // 0x171cbc: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x171CC0u;
        goto label_171cc0;
    }
    ctx->pc = 0x171CB8u;
    {
        const bool branch_taken_0x171cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x171CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171CB8u;
            // 0x171cbc: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171cb8) {
            ctx->pc = 0x171CE4u;
            goto label_171ce4;
        }
    }
    ctx->pc = 0x171CC0u;
label_171cc0:
    // 0x171cc0: 0xc041c5c  jal         func_107170
label_171cc4:
    if (ctx->pc == 0x171CC4u) {
        ctx->pc = 0x171CC4u;
            // 0x171cc4: 0x26250f40  addiu       $a1, $s1, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
        ctx->pc = 0x171CC8u;
        goto label_171cc8;
    }
    ctx->pc = 0x171CC0u;
    SET_GPR_U32(ctx, 31, 0x171CC8u);
    ctx->pc = 0x171CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171CC0u;
            // 0x171cc4: 0x26250f40  addiu       $a1, $s1, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171CC8u; }
        if (ctx->pc != 0x171CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171CC8u; }
        if (ctx->pc != 0x171CC8u) { return; }
    }
    ctx->pc = 0x171CC8u;
label_171cc8:
    // 0x171cc8: 0xc6210f44  lwc1        $f1, 0xF44($s1)
    ctx->pc = 0x171cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171ccc:
    // 0x171ccc: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x171cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_171cd0:
    // 0x171cd0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x171cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_171cd4:
    // 0x171cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171cd8:
    // 0x171cd8: 0x0  nop
    ctx->pc = 0x171cd8u;
    // NOP
label_171cdc:
    // 0x171cdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x171cdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_171ce0:
    // 0x171ce0: 0xe6200f44  swc1        $f0, 0xF44($s1)
    ctx->pc = 0x171ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3908), bits); }
label_171ce4:
    // 0x171ce4: 0x8622075e  lh          $v0, 0x75E($s1)
    ctx->pc = 0x171ce4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1886)));
label_171ce8:
    // 0x171ce8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_171cec:
    if (ctx->pc == 0x171CECu) {
        ctx->pc = 0x171CF0u;
        goto label_171cf0;
    }
    ctx->pc = 0x171CE8u;
    {
        const bool branch_taken_0x171ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171ce8) {
            ctx->pc = 0x171D24u;
            goto label_171d24;
        }
    }
    ctx->pc = 0x171CF0u;
label_171cf0:
    // 0x171cf0: 0xc6210760  lwc1        $f1, 0x760($s1)
    ctx->pc = 0x171cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171cf4:
    // 0x171cf4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x171cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_171cf8:
    // 0x171cf8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x171cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_171cfc:
    // 0x171cfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x171cfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171d00:
    // 0x171d00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_171d04:
    // 0x171d04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x171d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_171d08:
    // 0x171d08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x171d08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_171d0c:
    // 0x171d0c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x171d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171d10:
    // 0x171d10: 0x0  nop
    ctx->pc = 0x171d10u;
    // NOP
label_171d14:
    // 0x171d14: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_171d18:
    if (ctx->pc == 0x171D18u) {
        ctx->pc = 0x171D18u;
            // 0x171d18: 0xe6200760  swc1        $f0, 0x760($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1888), bits); }
        ctx->pc = 0x171D1Cu;
        goto label_171d1c;
    }
    ctx->pc = 0x171D14u;
    {
        const bool branch_taken_0x171d14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x171D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171D14u;
            // 0x171d18: 0xe6200760  swc1        $f0, 0x760($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1888), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d14) {
            ctx->pc = 0x171D54u;
            goto label_171d54;
        }
    }
    ctx->pc = 0x171D1Cu;
label_171d1c:
    // 0x171d1c: 0x1000000d  b           . + 4 + (0xD << 2)
label_171d20:
    if (ctx->pc == 0x171D20u) {
        ctx->pc = 0x171D20u;
            // 0x171d20: 0xe6220760  swc1        $f2, 0x760($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1888), bits); }
        ctx->pc = 0x171D24u;
        goto label_171d24;
    }
    ctx->pc = 0x171D1Cu;
    {
        const bool branch_taken_0x171d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171D1Cu;
            // 0x171d20: 0xe6220760  swc1        $f2, 0x760($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1888), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d1c) {
            ctx->pc = 0x171D54u;
            goto label_171d54;
        }
    }
    ctx->pc = 0x171D24u;
label_171d24:
    // 0x171d24: 0xc6220760  lwc1        $f2, 0x760($s1)
    ctx->pc = 0x171d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_171d28:
    // 0x171d28: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x171d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_171d2c:
    // 0x171d2c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x171d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_171d30:
    // 0x171d30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x171d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171d34:
    // 0x171d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171d38:
    // 0x171d38: 0x0  nop
    ctx->pc = 0x171d38u;
    // NOP
label_171d3c:
    // 0x171d3c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x171d3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_171d40:
    // 0x171d40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x171d40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171d44:
    // 0x171d44: 0x0  nop
    ctx->pc = 0x171d44u;
    // NOP
label_171d48:
    // 0x171d48: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_171d4c:
    if (ctx->pc == 0x171D4Cu) {
        ctx->pc = 0x171D4Cu;
            // 0x171d4c: 0xe6210760  swc1        $f1, 0x760($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1888), bits); }
        ctx->pc = 0x171D50u;
        goto label_171d50;
    }
    ctx->pc = 0x171D48u;
    {
        const bool branch_taken_0x171d48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171D48u;
            // 0x171d4c: 0xe6210760  swc1        $f1, 0x760($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1888), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d48) {
            ctx->pc = 0x171D54u;
            goto label_171d54;
        }
    }
    ctx->pc = 0x171D50u;
label_171d50:
    // 0x171d50: 0xe6200760  swc1        $f0, 0x760($s1)
    ctx->pc = 0x171d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1888), bits); }
label_171d54:
    // 0x171d54: 0x82220bf5  lb          $v0, 0xBF5($s1)
    ctx->pc = 0x171d54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3061)));
label_171d58:
    // 0x171d58: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_171d5c:
    if (ctx->pc == 0x171D5Cu) {
        ctx->pc = 0x171D60u;
        goto label_171d60;
    }
    ctx->pc = 0x171D58u;
    {
        const bool branch_taken_0x171d58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x171d58) {
            ctx->pc = 0x171D84u;
            goto label_171d84;
        }
    }
    ctx->pc = 0x171D60u;
label_171d60:
    // 0x171d60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x171d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_171d64:
    // 0x171d64: 0xa2220bf5  sb          $v0, 0xBF5($s1)
    ctx->pc = 0x171d64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3061), (uint8_t)GPR_U32(ctx, 2));
label_171d68:
    // 0x171d68: 0x82220bf5  lb          $v0, 0xBF5($s1)
    ctx->pc = 0x171d68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3061)));
label_171d6c:
    // 0x171d6c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_171d70:
    if (ctx->pc == 0x171D70u) {
        ctx->pc = 0x171D74u;
        goto label_171d74;
    }
    ctx->pc = 0x171D6Cu;
    {
        const bool branch_taken_0x171d6c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x171d6c) {
            ctx->pc = 0x171D84u;
            goto label_171d84;
        }
    }
    ctx->pc = 0x171D74u;
label_171d74:
    // 0x171d74: 0x82220bf4  lb          $v0, 0xBF4($s1)
    ctx->pc = 0x171d74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3060)));
label_171d78:
    // 0x171d78: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_171d7c:
    if (ctx->pc == 0x171D7Cu) {
        ctx->pc = 0x171D80u;
        goto label_171d80;
    }
    ctx->pc = 0x171D78u;
    {
        const bool branch_taken_0x171d78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x171d78) {
            ctx->pc = 0x171D84u;
            goto label_171d84;
        }
    }
    ctx->pc = 0x171D80u;
label_171d80:
    // 0x171d80: 0xa2200bf4  sb          $zero, 0xBF4($s1)
    ctx->pc = 0x171d80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3060), (uint8_t)GPR_U32(ctx, 0));
label_171d84:
    // 0x171d84: 0x86220764  lh          $v0, 0x764($s1)
    ctx->pc = 0x171d84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1892)));
label_171d88:
    // 0x171d88: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_171d8c:
    if (ctx->pc == 0x171D8Cu) {
        ctx->pc = 0x171D90u;
        goto label_171d90;
    }
    ctx->pc = 0x171D88u;
    {
        const bool branch_taken_0x171d88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x171d88) {
            ctx->pc = 0x171D98u;
            goto label_171d98;
        }
    }
    ctx->pc = 0x171D90u;
label_171d90:
    // 0x171d90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x171d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_171d94:
    // 0x171d94: 0xa6220764  sh          $v0, 0x764($s1)
    ctx->pc = 0x171d94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1892), (uint16_t)GPR_U32(ctx, 2));
label_171d98:
    // 0x171d98: 0x8e220774  lw          $v0, 0x774($s1)
    ctx->pc = 0x171d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1908)));
label_171d9c:
    // 0x171d9c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_171da0:
    if (ctx->pc == 0x171DA0u) {
        ctx->pc = 0x171DA4u;
        goto label_171da4;
    }
    ctx->pc = 0x171D9Cu;
    {
        const bool branch_taken_0x171d9c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x171d9c) {
            ctx->pc = 0x171DACu;
            goto label_171dac;
        }
    }
    ctx->pc = 0x171DA4u;
label_171da4:
    // 0x171da4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x171da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_171da8:
    // 0x171da8: 0xae220774  sw          $v0, 0x774($s1)
    ctx->pc = 0x171da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1908), GPR_U32(ctx, 2));
label_171dac:
    // 0x171dac: 0x8e220be8  lw          $v0, 0xBE8($s1)
    ctx->pc = 0x171dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3048)));
label_171db0:
    // 0x171db0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_171db4:
    if (ctx->pc == 0x171DB4u) {
        ctx->pc = 0x171DB8u;
        goto label_171db8;
    }
    ctx->pc = 0x171DB0u;
    {
        const bool branch_taken_0x171db0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x171db0) {
            ctx->pc = 0x171DC0u;
            goto label_171dc0;
        }
    }
    ctx->pc = 0x171DB8u;
label_171db8:
    // 0x171db8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x171db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_171dbc:
    // 0x171dbc: 0xae220be8  sw          $v0, 0xBE8($s1)
    ctx->pc = 0x171dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3048), GPR_U32(ctx, 2));
label_171dc0:
    // 0x171dc0: 0x8e220be4  lw          $v0, 0xBE4($s1)
    ctx->pc = 0x171dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3044)));
label_171dc4:
    // 0x171dc4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_171dc8:
    if (ctx->pc == 0x171DC8u) {
        ctx->pc = 0x171DCCu;
        goto label_171dcc;
    }
    ctx->pc = 0x171DC4u;
    {
        const bool branch_taken_0x171dc4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x171dc4) {
            ctx->pc = 0x171DD4u;
            goto label_171dd4;
        }
    }
    ctx->pc = 0x171DCCu;
label_171dcc:
    // 0x171dcc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x171dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_171dd0:
    // 0x171dd0: 0xae220be4  sw          $v0, 0xBE4($s1)
    ctx->pc = 0x171dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3044), GPR_U32(ctx, 2));
label_171dd4:
    // 0x171dd4: 0x8e220768  lw          $v0, 0x768($s1)
    ctx->pc = 0x171dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1896)));
label_171dd8:
    // 0x171dd8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_171ddc:
    if (ctx->pc == 0x171DDCu) {
        ctx->pc = 0x171DE0u;
        goto label_171de0;
    }
    ctx->pc = 0x171DD8u;
    {
        const bool branch_taken_0x171dd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x171dd8) {
            ctx->pc = 0x171DE8u;
            goto label_171de8;
        }
    }
    ctx->pc = 0x171DE0u;
label_171de0:
    // 0x171de0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x171de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_171de4:
    // 0x171de4: 0xae220768  sw          $v0, 0x768($s1)
    ctx->pc = 0x171de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1896), GPR_U32(ctx, 2));
label_171de8:
    // 0x171de8: 0x86220732  lh          $v0, 0x732($s1)
    ctx->pc = 0x171de8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1842)));
label_171dec:
    // 0x171dec: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_171df0:
    if (ctx->pc == 0x171DF0u) {
        ctx->pc = 0x171DF4u;
        goto label_171df4;
    }
    ctx->pc = 0x171DECu;
    {
        const bool branch_taken_0x171dec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x171dec) {
            ctx->pc = 0x171DFCu;
            goto label_171dfc;
        }
    }
    ctx->pc = 0x171DF4u;
label_171df4:
    // 0x171df4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x171df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_171df8:
    // 0x171df8: 0xa6220732  sh          $v0, 0x732($s1)
    ctx->pc = 0x171df8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1842), (uint16_t)GPR_U32(ctx, 2));
label_171dfc:
    // 0x171dfc: 0x86220bf8  lh          $v0, 0xBF8($s1)
    ctx->pc = 0x171dfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 3064)));
label_171e00:
    // 0x171e00: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_171e04:
    if (ctx->pc == 0x171E04u) {
        ctx->pc = 0x171E04u;
            // 0x171e04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171E08u;
        goto label_171e08;
    }
    ctx->pc = 0x171E00u;
    {
        const bool branch_taken_0x171e00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x171E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171E00u;
            // 0x171e04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e00) {
            ctx->pc = 0x171E34u;
            goto label_171e34;
        }
    }
    ctx->pc = 0x171E08u;
label_171e08:
    // 0x171e08: 0xc04c3b8  jal         func_130EE0
label_171e0c:
    if (ctx->pc == 0x171E0Cu) {
        ctx->pc = 0x171E10u;
        goto label_171e10;
    }
    ctx->pc = 0x171E08u;
    SET_GPR_U32(ctx, 31, 0x171E10u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E10u; }
        if (ctx->pc != 0x171E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E10u; }
        if (ctx->pc != 0x171E10u) { return; }
    }
    ctx->pc = 0x171E10u;
label_171e10:
    // 0x171e10: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x171e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_171e14:
    // 0x171e14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x171e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171e18:
    // 0x171e18: 0x0  nop
    ctx->pc = 0x171e18u;
    // NOP
label_171e1c:
    // 0x171e1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x171e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_171e20:
    // 0x171e20: 0xe6200bfc  swc1        $f0, 0xBFC($s1)
    ctx->pc = 0x171e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3068), bits); }
label_171e24:
    // 0x171e24: 0x86220bf8  lh          $v0, 0xBF8($s1)
    ctx->pc = 0x171e24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 3064)));
label_171e28:
    // 0x171e28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x171e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_171e2c:
    // 0x171e2c: 0xa6220bf8  sh          $v0, 0xBF8($s1)
    ctx->pc = 0x171e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3064), (uint16_t)GPR_U32(ctx, 2));
label_171e30:
    // 0x171e30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x171e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171e34:
    // 0x171e34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x171e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171e38:
    // 0x171e38: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x171e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_171e3c:
    // 0x171e3c: 0xc0704dc  jal         func_1C1370
label_171e40:
    if (ctx->pc == 0x171E40u) {
        ctx->pc = 0x171E40u;
            // 0x171e40: 0x24440734  addiu       $a0, $v0, 0x734 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1844));
        ctx->pc = 0x171E44u;
        goto label_171e44;
    }
    ctx->pc = 0x171E3Cu;
    SET_GPR_U32(ctx, 31, 0x171E44u);
    ctx->pc = 0x171E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171E3Cu;
            // 0x171e40: 0x24440734  addiu       $a0, $v0, 0x734 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1844));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1370u;
    if (runtime->hasFunction(0x1C1370u)) {
        auto targetFn = runtime->lookupFunction(0x1C1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E44u; }
        if (ctx->pc != 0x171E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__12CPalletAnimeFv_0x1c1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E44u; }
        if (ctx->pc != 0x171E44u) { return; }
    }
    ctx->pc = 0x171E44u;
label_171e44:
    // 0x171e44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x171e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_171e48:
    // 0x171e48: 0x2652000e  addiu       $s2, $s2, 0xE
    ctx->pc = 0x171e48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 14));
label_171e4c:
    // 0x171e4c: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x171e4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_171e50:
    // 0x171e50: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_171e54:
    if (ctx->pc == 0x171E54u) {
        ctx->pc = 0x171E58u;
        goto label_171e58;
    }
    ctx->pc = 0x171E50u;
    {
        const bool branch_taken_0x171e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171e50) {
            ctx->pc = 0x171E38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_171e38;
        }
    }
    ctx->pc = 0x171E58u;
label_171e58:
    // 0x171e58: 0xa6200728  sh          $zero, 0x728($s1)
    ctx->pc = 0x171e58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1832), (uint16_t)GPR_U32(ctx, 0));
label_171e5c:
    // 0x171e5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x171e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_171e60:
    // 0x171e60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x171e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_171e64:
    // 0x171e64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_171e68:
    // 0x171e68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_171e6c:
    // 0x171e6c: 0x3e00008  jr          $ra
label_171e70:
    if (ctx->pc == 0x171E70u) {
        ctx->pc = 0x171E70u;
            // 0x171e70: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x171E74u;
        goto label_fallthrough_0x171e6c;
    }
    ctx->pc = 0x171E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171E6Cu;
            // 0x171e70: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x171e6c:
    ctx->pc = 0x171E74u;
}
