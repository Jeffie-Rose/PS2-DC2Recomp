#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSub__9CMapPartsFi
// Address: 0x166a70 - 0x166e24
void DrawSub__9CMapPartsFi_0x166a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSub__9CMapPartsFi_0x166a70");
#endif

    switch (ctx->pc) {
        case 0x166a70u: goto label_166a70;
        case 0x166a74u: goto label_166a74;
        case 0x166a78u: goto label_166a78;
        case 0x166a7cu: goto label_166a7c;
        case 0x166a80u: goto label_166a80;
        case 0x166a84u: goto label_166a84;
        case 0x166a88u: goto label_166a88;
        case 0x166a8cu: goto label_166a8c;
        case 0x166a90u: goto label_166a90;
        case 0x166a94u: goto label_166a94;
        case 0x166a98u: goto label_166a98;
        case 0x166a9cu: goto label_166a9c;
        case 0x166aa0u: goto label_166aa0;
        case 0x166aa4u: goto label_166aa4;
        case 0x166aa8u: goto label_166aa8;
        case 0x166aacu: goto label_166aac;
        case 0x166ab0u: goto label_166ab0;
        case 0x166ab4u: goto label_166ab4;
        case 0x166ab8u: goto label_166ab8;
        case 0x166abcu: goto label_166abc;
        case 0x166ac0u: goto label_166ac0;
        case 0x166ac4u: goto label_166ac4;
        case 0x166ac8u: goto label_166ac8;
        case 0x166accu: goto label_166acc;
        case 0x166ad0u: goto label_166ad0;
        case 0x166ad4u: goto label_166ad4;
        case 0x166ad8u: goto label_166ad8;
        case 0x166adcu: goto label_166adc;
        case 0x166ae0u: goto label_166ae0;
        case 0x166ae4u: goto label_166ae4;
        case 0x166ae8u: goto label_166ae8;
        case 0x166aecu: goto label_166aec;
        case 0x166af0u: goto label_166af0;
        case 0x166af4u: goto label_166af4;
        case 0x166af8u: goto label_166af8;
        case 0x166afcu: goto label_166afc;
        case 0x166b00u: goto label_166b00;
        case 0x166b04u: goto label_166b04;
        case 0x166b08u: goto label_166b08;
        case 0x166b0cu: goto label_166b0c;
        case 0x166b10u: goto label_166b10;
        case 0x166b14u: goto label_166b14;
        case 0x166b18u: goto label_166b18;
        case 0x166b1cu: goto label_166b1c;
        case 0x166b20u: goto label_166b20;
        case 0x166b24u: goto label_166b24;
        case 0x166b28u: goto label_166b28;
        case 0x166b2cu: goto label_166b2c;
        case 0x166b30u: goto label_166b30;
        case 0x166b34u: goto label_166b34;
        case 0x166b38u: goto label_166b38;
        case 0x166b3cu: goto label_166b3c;
        case 0x166b40u: goto label_166b40;
        case 0x166b44u: goto label_166b44;
        case 0x166b48u: goto label_166b48;
        case 0x166b4cu: goto label_166b4c;
        case 0x166b50u: goto label_166b50;
        case 0x166b54u: goto label_166b54;
        case 0x166b58u: goto label_166b58;
        case 0x166b5cu: goto label_166b5c;
        case 0x166b60u: goto label_166b60;
        case 0x166b64u: goto label_166b64;
        case 0x166b68u: goto label_166b68;
        case 0x166b6cu: goto label_166b6c;
        case 0x166b70u: goto label_166b70;
        case 0x166b74u: goto label_166b74;
        case 0x166b78u: goto label_166b78;
        case 0x166b7cu: goto label_166b7c;
        case 0x166b80u: goto label_166b80;
        case 0x166b84u: goto label_166b84;
        case 0x166b88u: goto label_166b88;
        case 0x166b8cu: goto label_166b8c;
        case 0x166b90u: goto label_166b90;
        case 0x166b94u: goto label_166b94;
        case 0x166b98u: goto label_166b98;
        case 0x166b9cu: goto label_166b9c;
        case 0x166ba0u: goto label_166ba0;
        case 0x166ba4u: goto label_166ba4;
        case 0x166ba8u: goto label_166ba8;
        case 0x166bacu: goto label_166bac;
        case 0x166bb0u: goto label_166bb0;
        case 0x166bb4u: goto label_166bb4;
        case 0x166bb8u: goto label_166bb8;
        case 0x166bbcu: goto label_166bbc;
        case 0x166bc0u: goto label_166bc0;
        case 0x166bc4u: goto label_166bc4;
        case 0x166bc8u: goto label_166bc8;
        case 0x166bccu: goto label_166bcc;
        case 0x166bd0u: goto label_166bd0;
        case 0x166bd4u: goto label_166bd4;
        case 0x166bd8u: goto label_166bd8;
        case 0x166bdcu: goto label_166bdc;
        case 0x166be0u: goto label_166be0;
        case 0x166be4u: goto label_166be4;
        case 0x166be8u: goto label_166be8;
        case 0x166becu: goto label_166bec;
        case 0x166bf0u: goto label_166bf0;
        case 0x166bf4u: goto label_166bf4;
        case 0x166bf8u: goto label_166bf8;
        case 0x166bfcu: goto label_166bfc;
        case 0x166c00u: goto label_166c00;
        case 0x166c04u: goto label_166c04;
        case 0x166c08u: goto label_166c08;
        case 0x166c0cu: goto label_166c0c;
        case 0x166c10u: goto label_166c10;
        case 0x166c14u: goto label_166c14;
        case 0x166c18u: goto label_166c18;
        case 0x166c1cu: goto label_166c1c;
        case 0x166c20u: goto label_166c20;
        case 0x166c24u: goto label_166c24;
        case 0x166c28u: goto label_166c28;
        case 0x166c2cu: goto label_166c2c;
        case 0x166c30u: goto label_166c30;
        case 0x166c34u: goto label_166c34;
        case 0x166c38u: goto label_166c38;
        case 0x166c3cu: goto label_166c3c;
        case 0x166c40u: goto label_166c40;
        case 0x166c44u: goto label_166c44;
        case 0x166c48u: goto label_166c48;
        case 0x166c4cu: goto label_166c4c;
        case 0x166c50u: goto label_166c50;
        case 0x166c54u: goto label_166c54;
        case 0x166c58u: goto label_166c58;
        case 0x166c5cu: goto label_166c5c;
        case 0x166c60u: goto label_166c60;
        case 0x166c64u: goto label_166c64;
        case 0x166c68u: goto label_166c68;
        case 0x166c6cu: goto label_166c6c;
        case 0x166c70u: goto label_166c70;
        case 0x166c74u: goto label_166c74;
        case 0x166c78u: goto label_166c78;
        case 0x166c7cu: goto label_166c7c;
        case 0x166c80u: goto label_166c80;
        case 0x166c84u: goto label_166c84;
        case 0x166c88u: goto label_166c88;
        case 0x166c8cu: goto label_166c8c;
        case 0x166c90u: goto label_166c90;
        case 0x166c94u: goto label_166c94;
        case 0x166c98u: goto label_166c98;
        case 0x166c9cu: goto label_166c9c;
        case 0x166ca0u: goto label_166ca0;
        case 0x166ca4u: goto label_166ca4;
        case 0x166ca8u: goto label_166ca8;
        case 0x166cacu: goto label_166cac;
        case 0x166cb0u: goto label_166cb0;
        case 0x166cb4u: goto label_166cb4;
        case 0x166cb8u: goto label_166cb8;
        case 0x166cbcu: goto label_166cbc;
        case 0x166cc0u: goto label_166cc0;
        case 0x166cc4u: goto label_166cc4;
        case 0x166cc8u: goto label_166cc8;
        case 0x166cccu: goto label_166ccc;
        case 0x166cd0u: goto label_166cd0;
        case 0x166cd4u: goto label_166cd4;
        case 0x166cd8u: goto label_166cd8;
        case 0x166cdcu: goto label_166cdc;
        case 0x166ce0u: goto label_166ce0;
        case 0x166ce4u: goto label_166ce4;
        case 0x166ce8u: goto label_166ce8;
        case 0x166cecu: goto label_166cec;
        case 0x166cf0u: goto label_166cf0;
        case 0x166cf4u: goto label_166cf4;
        case 0x166cf8u: goto label_166cf8;
        case 0x166cfcu: goto label_166cfc;
        case 0x166d00u: goto label_166d00;
        case 0x166d04u: goto label_166d04;
        case 0x166d08u: goto label_166d08;
        case 0x166d0cu: goto label_166d0c;
        case 0x166d10u: goto label_166d10;
        case 0x166d14u: goto label_166d14;
        case 0x166d18u: goto label_166d18;
        case 0x166d1cu: goto label_166d1c;
        case 0x166d20u: goto label_166d20;
        case 0x166d24u: goto label_166d24;
        case 0x166d28u: goto label_166d28;
        case 0x166d2cu: goto label_166d2c;
        case 0x166d30u: goto label_166d30;
        case 0x166d34u: goto label_166d34;
        case 0x166d38u: goto label_166d38;
        case 0x166d3cu: goto label_166d3c;
        case 0x166d40u: goto label_166d40;
        case 0x166d44u: goto label_166d44;
        case 0x166d48u: goto label_166d48;
        case 0x166d4cu: goto label_166d4c;
        case 0x166d50u: goto label_166d50;
        case 0x166d54u: goto label_166d54;
        case 0x166d58u: goto label_166d58;
        case 0x166d5cu: goto label_166d5c;
        case 0x166d60u: goto label_166d60;
        case 0x166d64u: goto label_166d64;
        case 0x166d68u: goto label_166d68;
        case 0x166d6cu: goto label_166d6c;
        case 0x166d70u: goto label_166d70;
        case 0x166d74u: goto label_166d74;
        case 0x166d78u: goto label_166d78;
        case 0x166d7cu: goto label_166d7c;
        case 0x166d80u: goto label_166d80;
        case 0x166d84u: goto label_166d84;
        case 0x166d88u: goto label_166d88;
        case 0x166d8cu: goto label_166d8c;
        case 0x166d90u: goto label_166d90;
        case 0x166d94u: goto label_166d94;
        case 0x166d98u: goto label_166d98;
        case 0x166d9cu: goto label_166d9c;
        case 0x166da0u: goto label_166da0;
        case 0x166da4u: goto label_166da4;
        case 0x166da8u: goto label_166da8;
        case 0x166dacu: goto label_166dac;
        case 0x166db0u: goto label_166db0;
        case 0x166db4u: goto label_166db4;
        case 0x166db8u: goto label_166db8;
        case 0x166dbcu: goto label_166dbc;
        case 0x166dc0u: goto label_166dc0;
        case 0x166dc4u: goto label_166dc4;
        case 0x166dc8u: goto label_166dc8;
        case 0x166dccu: goto label_166dcc;
        case 0x166dd0u: goto label_166dd0;
        case 0x166dd4u: goto label_166dd4;
        case 0x166dd8u: goto label_166dd8;
        case 0x166ddcu: goto label_166ddc;
        case 0x166de0u: goto label_166de0;
        case 0x166de4u: goto label_166de4;
        case 0x166de8u: goto label_166de8;
        case 0x166decu: goto label_166dec;
        case 0x166df0u: goto label_166df0;
        case 0x166df4u: goto label_166df4;
        case 0x166df8u: goto label_166df8;
        case 0x166dfcu: goto label_166dfc;
        case 0x166e00u: goto label_166e00;
        case 0x166e04u: goto label_166e04;
        case 0x166e08u: goto label_166e08;
        case 0x166e0cu: goto label_166e0c;
        case 0x166e10u: goto label_166e10;
        case 0x166e14u: goto label_166e14;
        case 0x166e18u: goto label_166e18;
        case 0x166e1cu: goto label_166e1c;
        case 0x166e20u: goto label_166e20;
        default: break;
    }

    ctx->pc = 0x166a70u;

label_166a70:
    // 0x166a70: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x166a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_166a74:
    // 0x166a74: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x166a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_166a78:
    // 0x166a78: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x166a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_166a7c:
    // 0x166a7c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x166a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_166a80:
    // 0x166a80: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x166a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_166a84:
    // 0x166a84: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x166a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_166a88:
    // 0x166a88: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x166a88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_166a8c:
    // 0x166a8c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x166a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_166a90:
    // 0x166a90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x166a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_166a94:
    // 0x166a94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x166a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_166a98:
    // 0x166a98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x166a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_166a9c:
    // 0x166a9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x166a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_166aa0:
    // 0x166aa0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x166aa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_166aa4:
    // 0x166aa4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x166aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_166aa8:
    // 0x166aa8: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x166aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_166aac:
    // 0x166aac: 0x320f809  jalr        $t9
label_166ab0:
    if (ctx->pc == 0x166AB0u) {
        ctx->pc = 0x166AB0u;
            // 0x166ab0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166AB4u;
        goto label_166ab4;
    }
    ctx->pc = 0x166AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x166AB4u);
        ctx->pc = 0x166AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166AACu;
            // 0x166ab0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x166AB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166AB4u; }
            if (ctx->pc != 0x166AB4u) { return; }
        }
        }
    }
    ctx->pc = 0x166AB4u;
label_166ab4:
    // 0x166ab4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_166ab8:
    if (ctx->pc == 0x166AB8u) {
        ctx->pc = 0x166AB8u;
            // 0x166ab8: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x166ABCu;
        goto label_166abc;
    }
    ctx->pc = 0x166AB4u;
    {
        const bool branch_taken_0x166ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166AB4u;
            // 0x166ab8: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ab4) {
            ctx->pc = 0x166AC4u;
            goto label_166ac4;
        }
    }
    ctx->pc = 0x166ABCu;
label_166abc:
    // 0x166abc: 0x100000cc  b           . + 4 + (0xCC << 2)
label_166ac0:
    if (ctx->pc == 0x166AC0u) {
        ctx->pc = 0x166AC0u;
            // 0x166ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166AC4u;
        goto label_166ac4;
    }
    ctx->pc = 0x166ABCu;
    {
        const bool branch_taken_0x166abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166ABCu;
            // 0x166ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166abc) {
            ctx->pc = 0x166DF0u;
            goto label_166df0;
        }
    }
    ctx->pc = 0x166AC4u;
label_166ac4:
    // 0x166ac4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x166ac4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166ac8:
    // 0x166ac8: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x166ac8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_166acc:
    // 0x166acc: 0xc050e44  jal         func_143910
label_166ad0:
    if (ctx->pc == 0x166AD0u) {
        ctx->pc = 0x166AD0u;
            // 0x166ad0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166AD4u;
        goto label_166ad4;
    }
    ctx->pc = 0x166ACCu;
    SET_GPR_U32(ctx, 31, 0x166AD4u);
    ctx->pc = 0x166AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166ACCu;
            // 0x166ad0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143910u;
    if (runtime->hasFunction(0x143910u)) {
        auto targetFn = runtime->lookupFunction(0x143910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166AD4u; }
        if (ctx->pc != 0x166AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetPlightEnable__Fv_0x143910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166AD4u; }
        if (ctx->pc != 0x166AD4u) { return; }
    }
    ctx->pc = 0x166AD4u;
label_166ad4:
    // 0x166ad4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x166ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_166ad8:
    // 0x166ad8: 0x8ea202e4  lw          $v0, 0x2E4($s5)
    ctx->pc = 0x166ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 740)));
label_166adc:
    // 0x166adc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_166ae0:
    if (ctx->pc == 0x166AE0u) {
        ctx->pc = 0x166AE0u;
            // 0x166ae0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x166AE4u;
        goto label_166ae4;
    }
    ctx->pc = 0x166ADCu;
    {
        const bool branch_taken_0x166adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166ADCu;
            // 0x166ae0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166adc) {
            ctx->pc = 0x166B14u;
            goto label_166b14;
        }
    }
    ctx->pc = 0x166AE4u;
label_166ae4:
    // 0x166ae4: 0xc04c058  jal         func_130160
label_166ae8:
    if (ctx->pc == 0x166AE8u) {
        ctx->pc = 0x166AECu;
        goto label_166aec;
    }
    ctx->pc = 0x166AE4u;
    SET_GPR_U32(ctx, 31, 0x166AECu);
    ctx->pc = 0x130160u;
    if (runtime->hasFunction(0x130160u)) {
        auto targetFn = runtime->lookupFunction(0x130160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166AECu; }
        if (ctx->pc != 0x166AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroMatrix__FPA4_f_0x130160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166AECu; }
        if (ctx->pc != 0x166AECu) { return; }
    }
    ctx->pc = 0x166AECu;
label_166aec:
    // 0x166aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166af0:
    // 0x166af0: 0xc050dc8  jal         func_143720
label_166af4:
    if (ctx->pc == 0x166AF4u) {
        ctx->pc = 0x166AF4u;
            // 0x166af4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x166AF8u;
        goto label_166af8;
    }
    ctx->pc = 0x166AF0u;
    SET_GPR_U32(ctx, 31, 0x166AF8u);
    ctx->pc = 0x166AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166AF0u;
            // 0x166af4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166AF8u; }
        if (ctx->pc != 0x166AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166AF8u; }
        if (ctx->pc != 0x166AF8u) { return; }
    }
    ctx->pc = 0x166AF8u;
label_166af8:
    // 0x166af8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x166af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_166afc:
    // 0x166afc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x166afcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166b00:
    // 0x166b00: 0xc050dd0  jal         func_143740
label_166b04:
    if (ctx->pc == 0x166B04u) {
        ctx->pc = 0x166B04u;
            // 0x166b04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166B08u;
        goto label_166b08;
    }
    ctx->pc = 0x166B00u;
    SET_GPR_U32(ctx, 31, 0x166B08u);
    ctx->pc = 0x166B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166B00u;
            // 0x166b04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143740u;
    if (runtime->hasFunction(0x143740u)) {
        auto targetFn = runtime->lookupFunction(0x143740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B08u; }
        if (ctx->pc != 0x166B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetLight__FPA4_fPA4_f_0x143740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B08u; }
        if (ctx->pc != 0x166B08u) { return; }
    }
    ctx->pc = 0x166B08u;
label_166b08:
    // 0x166b08: 0xc050e14  jal         func_143850
label_166b0c:
    if (ctx->pc == 0x166B0Cu) {
        ctx->pc = 0x166B10u;
        goto label_166b10;
    }
    ctx->pc = 0x166B08u;
    SET_GPR_U32(ctx, 31, 0x166B10u);
    ctx->pc = 0x143850u;
    if (runtime->hasFunction(0x143850u)) {
        auto targetFn = runtime->lookupFunction(0x143850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B10u; }
        if (ctx->pc != 0x166B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgResetPlight__Fv_0x143850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B10u; }
        if (ctx->pc != 0x166B10u) { return; }
    }
    ctx->pc = 0x166B10u;
label_166b10:
    // 0x166b10: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x166b10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166b14:
    // 0x166b14: 0x8ea202e8  lw          $v0, 0x2E8($s5)
    ctx->pc = 0x166b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 744)));
label_166b18:
    // 0x166b18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_166b1c:
    if (ctx->pc == 0x166B1Cu) {
        ctx->pc = 0x166B1Cu;
            // 0x166b1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166B20u;
        goto label_166b20;
    }
    ctx->pc = 0x166B18u;
    {
        const bool branch_taken_0x166b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166B18u;
            // 0x166b1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b18) {
            ctx->pc = 0x166B28u;
            goto label_166b28;
        }
    }
    ctx->pc = 0x166B20u;
label_166b20:
    // 0x166b20: 0xc050e40  jal         func_143900
label_166b24:
    if (ctx->pc == 0x166B24u) {
        ctx->pc = 0x166B28u;
        goto label_166b28;
    }
    ctx->pc = 0x166B20u;
    SET_GPR_U32(ctx, 31, 0x166B28u);
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B28u; }
        if (ctx->pc != 0x166B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B28u; }
        if (ctx->pc != 0x166B28u) { return; }
    }
    ctx->pc = 0x166B28u;
label_166b28:
    // 0x166b28: 0x8ea202b0  lw          $v0, 0x2B0($s5)
    ctx->pc = 0x166b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 688)));
label_166b2c:
    // 0x166b2c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x166b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_166b30:
    // 0x166b30: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_166b34:
    if (ctx->pc == 0x166B34u) {
        ctx->pc = 0x166B34u;
            // 0x166b34: 0x26a402b0  addiu       $a0, $s5, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
        ctx->pc = 0x166B38u;
        goto label_166b38;
    }
    ctx->pc = 0x166B30u;
    {
        const bool branch_taken_0x166b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166B30u;
            // 0x166b34: 0x26a402b0  addiu       $a0, $s5, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b30) {
            ctx->pc = 0x166D00u;
            goto label_166d00;
        }
    }
    ctx->pc = 0x166B38u;
label_166b38:
    // 0x166b38: 0xc0a761c  jal         func_29D870
label_166b3c:
    if (ctx->pc == 0x166B3Cu) {
        ctx->pc = 0x166B3Cu;
            // 0x166b3c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x166B40u;
        goto label_166b40;
    }
    ctx->pc = 0x166B38u;
    SET_GPR_U32(ctx, 31, 0x166B40u);
    ctx->pc = 0x166B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166B38u;
            // 0x166b3c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B40u; }
        if (ctx->pc != 0x166B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B40u; }
        if (ctx->pc != 0x166B40u) { return; }
    }
    ctx->pc = 0x166B40u;
label_166b40:
    // 0x166b40: 0xc0a762c  jal         func_29D8B0
label_166b44:
    if (ctx->pc == 0x166B44u) {
        ctx->pc = 0x166B44u;
            // 0x166b44: 0x26a402b0  addiu       $a0, $s5, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
        ctx->pc = 0x166B48u;
        goto label_166b48;
    }
    ctx->pc = 0x166B40u;
    SET_GPR_U32(ctx, 31, 0x166B48u);
    ctx->pc = 0x166B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166B40u;
            // 0x166b44: 0x26a402b0  addiu       $a0, $s5, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B48u; }
        if (ctx->pc != 0x166B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B48u; }
        if (ctx->pc != 0x166B48u) { return; }
    }
    ctx->pc = 0x166B48u;
label_166b48:
    // 0x166b48: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_166b4c:
    if (ctx->pc == 0x166B4Cu) {
        ctx->pc = 0x166B4Cu;
            // 0x166b4c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166B50u;
        goto label_166b50;
    }
    ctx->pc = 0x166B48u;
    {
        const bool branch_taken_0x166b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166B48u;
            // 0x166b4c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b48) {
            ctx->pc = 0x166D00u;
            goto label_166d00;
        }
    }
    ctx->pc = 0x166B50u;
label_166b50:
    // 0x166b50: 0x8e4201b0  lw          $v0, 0x1B0($s2)
    ctx->pc = 0x166b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_166b54:
    // 0x166b54: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
label_166b58:
    if (ctx->pc == 0x166B58u) {
        ctx->pc = 0x166B5Cu;
        goto label_166b5c;
    }
    ctx->pc = 0x166B54u;
    {
        const bool branch_taken_0x166b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166b54) {
            ctx->pc = 0x166CF0u;
            goto label_166cf0;
        }
    }
    ctx->pc = 0x166B5Cu;
label_166b5c:
    // 0x166b5c: 0x16e00005  bnez        $s7, . + 4 + (0x5 << 2)
label_166b60:
    if (ctx->pc == 0x166B60u) {
        ctx->pc = 0x166B60u;
            // 0x166b60: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x166B64u;
        goto label_166b64;
    }
    ctx->pc = 0x166B5Cu;
    {
        const bool branch_taken_0x166b5c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x166B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166B5Cu;
            // 0x166b60: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b5c) {
            ctx->pc = 0x166B74u;
            goto label_166b74;
        }
    }
    ctx->pc = 0x166B64u;
label_166b64:
    // 0x166b64: 0xc050dc8  jal         func_143720
label_166b68:
    if (ctx->pc == 0x166B68u) {
        ctx->pc = 0x166B68u;
            // 0x166b68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x166B6Cu;
        goto label_166b6c;
    }
    ctx->pc = 0x166B64u;
    SET_GPR_U32(ctx, 31, 0x166B6Cu);
    ctx->pc = 0x166B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166B64u;
            // 0x166b68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B6Cu; }
        if (ctx->pc != 0x166B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B6Cu; }
        if (ctx->pc != 0x166B6Cu) { return; }
    }
    ctx->pc = 0x166B6Cu;
label_166b6c:
    // 0x166b6c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x166b6cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166b70:
    // 0x166b70: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x166b70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166b74:
    // 0x166b74: 0x0  nop
    ctx->pc = 0x166b74u;
    // NOP
label_166b78:
    // 0x166b78: 0x8ea50300  lw          $a1, 0x300($s5)
    ctx->pc = 0x166b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 768)));
label_166b7c:
    // 0x166b7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x166b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_166b80:
    // 0x166b80: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x166b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_166b84:
    // 0x166b84: 0xc0a7b8c  jal         func_29EE30
label_166b88:
    if (ctx->pc == 0x166B88u) {
        ctx->pc = 0x166B88u;
            // 0x166b88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166B8Cu;
        goto label_166b8c;
    }
    ctx->pc = 0x166B84u;
    SET_GPR_U32(ctx, 31, 0x166B8Cu);
    ctx->pc = 0x166B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166B84u;
            // 0x166b88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EE30u;
    if (runtime->hasFunction(0x29EE30u)) {
        auto targetFn = runtime->lookupFunction(0x29EE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B8Cu; }
        if (ctx->pc != 0x166B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightAnimeWeight__FP10CFuncPointi_0x29ee30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B8Cu; }
        if (ctx->pc != 0x166B8Cu) { return; }
    }
    ctx->pc = 0x166B8Cu;
label_166b8c:
    // 0x166b8c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x166b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_166b90:
    // 0x166b90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x166b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_166b94:
    // 0x166b94: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
label_166b98:
    if (ctx->pc == 0x166B98u) {
        ctx->pc = 0x166B98u;
            // 0x166b98: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x166B9Cu;
        goto label_166b9c;
    }
    ctx->pc = 0x166B94u;
    {
        const bool branch_taken_0x166b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166B94u;
            // 0x166b98: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b94) {
            ctx->pc = 0x166CB8u;
            goto label_166cb8;
        }
    }
    ctx->pc = 0x166B9Cu;
label_166b9c:
    // 0x166b9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x166b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_166ba0:
    // 0x166ba0: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
label_166ba4:
    if (ctx->pc == 0x166BA4u) {
        ctx->pc = 0x166BA4u;
            // 0x166ba4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x166BA8u;
        goto label_166ba8;
    }
    ctx->pc = 0x166BA0u;
    {
        const bool branch_taken_0x166ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166BA0u;
            // 0x166ba4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ba0) {
            ctx->pc = 0x166C4Cu;
            goto label_166c4c;
        }
    }
    ctx->pc = 0x166BA8u;
label_166ba8:
    // 0x166ba8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_166bac:
    if (ctx->pc == 0x166BACu) {
        ctx->pc = 0x166BB0u;
        goto label_166bb0;
    }
    ctx->pc = 0x166BA8u;
    {
        const bool branch_taken_0x166ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x166ba8) {
            ctx->pc = 0x166C10u;
            goto label_166c10;
        }
    }
    ctx->pc = 0x166BB0u;
label_166bb0:
    // 0x166bb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_166bb4:
    if (ctx->pc == 0x166BB4u) {
        ctx->pc = 0x166BB8u;
        goto label_166bb8;
    }
    ctx->pc = 0x166BB0u;
    {
        const bool branch_taken_0x166bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166bb0) {
            ctx->pc = 0x166BC0u;
            goto label_166bc0;
        }
    }
    ctx->pc = 0x166BB8u;
label_166bb8:
    // 0x166bb8: 0x1000004d  b           . + 4 + (0x4D << 2)
label_166bbc:
    if (ctx->pc == 0x166BBCu) {
        ctx->pc = 0x166BC0u;
        goto label_166bc0;
    }
    ctx->pc = 0x166BB8u;
    {
        const bool branch_taken_0x166bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166bb8) {
            ctx->pc = 0x166CF0u;
            goto label_166cf0;
        }
    }
    ctx->pc = 0x166BC0u;
label_166bc0:
    // 0x166bc0: 0x600004b  bltz        $s0, . + 4 + (0x4B << 2)
label_166bc4:
    if (ctx->pc == 0x166BC4u) {
        ctx->pc = 0x166BC4u;
            // 0x166bc4: 0x26a400c0  addiu       $a0, $s5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
        ctx->pc = 0x166BC8u;
        goto label_166bc8;
    }
    ctx->pc = 0x166BC0u;
    {
        const bool branch_taken_0x166bc0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x166BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166BC0u;
            // 0x166bc4: 0x26a400c0  addiu       $a0, $s5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166bc0) {
            ctx->pc = 0x166CF0u;
            goto label_166cf0;
        }
    }
    ctx->pc = 0x166BC8u;
label_166bc8:
    // 0x166bc8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x166bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_166bcc:
    // 0x166bcc: 0xc04de1c  jal         func_137870
label_166bd0:
    if (ctx->pc == 0x166BD0u) {
        ctx->pc = 0x166BD0u;
            // 0x166bd0: 0x26460180  addiu       $a2, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->pc = 0x166BD4u;
        goto label_166bd4;
    }
    ctx->pc = 0x166BCCu;
    SET_GPR_U32(ctx, 31, 0x166BD4u);
    ctx->pc = 0x166BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166BCCu;
            // 0x166bd0: 0x26460180  addiu       $a2, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137870u;
    if (runtime->hasFunction(0x137870u)) {
        auto targetFn = runtime->lookupFunction(0x137870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166BD4u; }
        if (ctx->pc != 0x166BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldDir__8mgCFrameFPfPf_0x137870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166BD4u; }
        if (ctx->pc != 0x166BD4u) { return; }
    }
    ctx->pc = 0x166BD4u;
label_166bd4:
    // 0x166bd4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x166bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_166bd8:
    // 0x166bd8: 0xc041be0  jal         func_106F80
label_166bdc:
    if (ctx->pc == 0x166BDCu) {
        ctx->pc = 0x166BDCu;
            // 0x166bdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166BE0u;
        goto label_166be0;
    }
    ctx->pc = 0x166BD8u;
    SET_GPR_U32(ctx, 31, 0x166BE0u);
    ctx->pc = 0x166BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166BD8u;
            // 0x166bdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166BE0u; }
        if (ctx->pc != 0x166BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166BE0u; }
        if (ctx->pc != 0x166BE0u) { return; }
    }
    ctx->pc = 0x166BE0u;
label_166be0:
    // 0x166be0: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x166be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_166be4:
    // 0x166be4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x166be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_166be8:
    // 0x166be8: 0xc041c4a  jal         func_107128
label_166bec:
    if (ctx->pc == 0x166BECu) {
        ctx->pc = 0x166BECu;
            // 0x166bec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x166BF0u;
        goto label_166bf0;
    }
    ctx->pc = 0x166BE8u;
    SET_GPR_U32(ctx, 31, 0x166BF0u);
    ctx->pc = 0x166BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166BE8u;
            // 0x166bec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166BF0u; }
        if (ctx->pc != 0x166BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166BF0u; }
        if (ctx->pc != 0x166BF0u) { return; }
    }
    ctx->pc = 0x166BF0u;
label_166bf0:
    // 0x166bf0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x166bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_166bf4:
    // 0x166bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166bf8:
    // 0x166bf8: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x166bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_166bfc:
    // 0x166bfc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x166bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_166c00:
    // 0x166c00: 0xc050de0  jal         func_143780
label_166c04:
    if (ctx->pc == 0x166C04u) {
        ctx->pc = 0x166C04u;
            // 0x166c04: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x166C08u;
        goto label_166c08;
    }
    ctx->pc = 0x166C00u;
    SET_GPR_U32(ctx, 31, 0x166C08u);
    ctx->pc = 0x166C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C00u;
            // 0x166c04: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143780u;
    if (runtime->hasFunction(0x143780u)) {
        auto targetFn = runtime->lookupFunction(0x143780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C08u; }
        if (ctx->pc != 0x166C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetLight__FiPfPf_0x143780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C08u; }
        if (ctx->pc != 0x166C08u) { return; }
    }
    ctx->pc = 0x166C08u;
label_166c08:
    // 0x166c08: 0x10000039  b           . + 4 + (0x39 << 2)
label_166c0c:
    if (ctx->pc == 0x166C0Cu) {
        ctx->pc = 0x166C0Cu;
            // 0x166c0c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x166C10u;
        goto label_166c10;
    }
    ctx->pc = 0x166C08u;
    {
        const bool branch_taken_0x166c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166C08u;
            // 0x166c0c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c08) {
            ctx->pc = 0x166CF0u;
            goto label_166cf0;
        }
    }
    ctx->pc = 0x166C10u;
label_166c10:
    // 0x166c10: 0xc050df4  jal         func_1437D0
label_166c14:
    if (ctx->pc == 0x166C14u) {
        ctx->pc = 0x166C14u;
            // 0x166c14: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x166C18u;
        goto label_166c18;
    }
    ctx->pc = 0x166C10u;
    SET_GPR_U32(ctx, 31, 0x166C18u);
    ctx->pc = 0x166C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C10u;
            // 0x166c14: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C18u; }
        if (ctx->pc != 0x166C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C18u; }
        if (ctx->pc != 0x166C18u) { return; }
    }
    ctx->pc = 0x166C18u;
label_166c18:
    // 0x166c18: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x166c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166c1c:
    // 0x166c1c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x166c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_166c20:
    // 0x166c20: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x166c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_166c24:
    // 0x166c24: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x166c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_166c28:
    // 0x166c28: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x166c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166c2c:
    // 0x166c2c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x166c2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_166c30:
    // 0x166c30: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x166c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_166c34:
    // 0x166c34: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x166c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166c38:
    // 0x166c38: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x166c38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_166c3c:
    // 0x166c3c: 0xc050dec  jal         func_1437B0
label_166c40:
    if (ctx->pc == 0x166C40u) {
        ctx->pc = 0x166C40u;
            // 0x166c40: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->pc = 0x166C44u;
        goto label_166c44;
    }
    ctx->pc = 0x166C3Cu;
    SET_GPR_U32(ctx, 31, 0x166C44u);
    ctx->pc = 0x166C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C3Cu;
            // 0x166c40: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C44u; }
        if (ctx->pc != 0x166C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C44u; }
        if (ctx->pc != 0x166C44u) { return; }
    }
    ctx->pc = 0x166C44u;
label_166c44:
    // 0x166c44: 0x1000002a  b           . + 4 + (0x2A << 2)
label_166c48:
    if (ctx->pc == 0x166C48u) {
        ctx->pc = 0x166C4Cu;
        goto label_166c4c;
    }
    ctx->pc = 0x166C44u;
    {
        const bool branch_taken_0x166c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166c44) {
            ctx->pc = 0x166CF0u;
            goto label_166cf0;
        }
    }
    ctx->pc = 0x166C4Cu;
label_166c4c:
    // 0x166c4c: 0x0  nop
    ctx->pc = 0x166c4cu;
    // NOP
label_166c50:
    // 0x166c50: 0xc050e40  jal         func_143900
label_166c54:
    if (ctx->pc == 0x166C54u) {
        ctx->pc = 0x166C54u;
            // 0x166c54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x166C58u;
        goto label_166c58;
    }
    ctx->pc = 0x166C50u;
    SET_GPR_U32(ctx, 31, 0x166C58u);
    ctx->pc = 0x166C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C50u;
            // 0x166c54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C58u; }
        if (ctx->pc != 0x166C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C58u; }
        if (ctx->pc != 0x166C58u) { return; }
    }
    ctx->pc = 0x166C58u;
label_166c58:
    // 0x166c58: 0x6200025  bltz        $s1, . + 4 + (0x25 << 2)
label_166c5c:
    if (ctx->pc == 0x166C5Cu) {
        ctx->pc = 0x166C60u;
        goto label_166c60;
    }
    ctx->pc = 0x166C58u;
    {
        const bool branch_taken_0x166c58 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x166c58) {
            ctx->pc = 0x166CF0u;
            goto label_166cf0;
        }
    }
    ctx->pc = 0x166C60u;
label_166c60:
    // 0x166c60: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x166c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_166c64:
    // 0x166c64: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_166c68:
    if (ctx->pc == 0x166C68u) {
        ctx->pc = 0x166C68u;
            // 0x166c68: 0x26a400c0  addiu       $a0, $s5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
        ctx->pc = 0x166C6Cu;
        goto label_166c6c;
    }
    ctx->pc = 0x166C64u;
    {
        const bool branch_taken_0x166c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166C64u;
            // 0x166c68: 0x26a400c0  addiu       $a0, $s5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c64) {
            ctx->pc = 0x166CF0u;
            goto label_166cf0;
        }
    }
    ctx->pc = 0x166C6Cu;
label_166c6c:
    // 0x166c6c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x166c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_166c70:
    // 0x166c70: 0xc04ddf8  jal         func_1377E0
label_166c74:
    if (ctx->pc == 0x166C74u) {
        ctx->pc = 0x166C74u;
            // 0x166c74: 0x26460180  addiu       $a2, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->pc = 0x166C78u;
        goto label_166c78;
    }
    ctx->pc = 0x166C70u;
    SET_GPR_U32(ctx, 31, 0x166C78u);
    ctx->pc = 0x166C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C70u;
            // 0x166c74: 0x26460180  addiu       $a2, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1377E0u;
    if (runtime->hasFunction(0x1377E0u)) {
        auto targetFn = runtime->lookupFunction(0x1377E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C78u; }
        if (ctx->pc != 0x166C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition__8mgCFrameFPfPf_0x1377e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C78u; }
        if (ctx->pc != 0x166C78u) { return; }
    }
    ctx->pc = 0x166C78u;
label_166c78:
    // 0x166c78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x166c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_166c7c:
    // 0x166c7c: 0xc0a7b8c  jal         func_29EE30
label_166c80:
    if (ctx->pc == 0x166C80u) {
        ctx->pc = 0x166C80u;
            // 0x166c80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166C84u;
        goto label_166c84;
    }
    ctx->pc = 0x166C7Cu;
    SET_GPR_U32(ctx, 31, 0x166C84u);
    ctx->pc = 0x166C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C7Cu;
            // 0x166c80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EE30u;
    if (runtime->hasFunction(0x29EE30u)) {
        auto targetFn = runtime->lookupFunction(0x29EE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C84u; }
        if (ctx->pc != 0x166C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightAnimeWeight__FP10CFuncPointi_0x29ee30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C84u; }
        if (ctx->pc != 0x166C84u) { return; }
    }
    ctx->pc = 0x166C84u;
label_166c84:
    // 0x166c84: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x166c84u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_166c88:
    // 0x166c88: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x166c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_166c8c:
    // 0x166c8c: 0xc041c4a  jal         func_107128
label_166c90:
    if (ctx->pc == 0x166C90u) {
        ctx->pc = 0x166C90u;
            // 0x166c90: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x166C94u;
        goto label_166c94;
    }
    ctx->pc = 0x166C8Cu;
    SET_GPR_U32(ctx, 31, 0x166C94u);
    ctx->pc = 0x166C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C8Cu;
            // 0x166c90: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C94u; }
        if (ctx->pc != 0x166C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C94u; }
        if (ctx->pc != 0x166C94u) { return; }
    }
    ctx->pc = 0x166C94u;
label_166c94:
    // 0x166c94: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x166c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_166c98:
    // 0x166c98: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x166c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_166c9c:
    // 0x166c9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x166c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_166ca0:
    // 0x166ca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166ca4:
    // 0x166ca4: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x166ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_166ca8:
    // 0x166ca8: 0xc050df8  jal         func_1437E0
label_166cac:
    if (ctx->pc == 0x166CACu) {
        ctx->pc = 0x166CACu;
            // 0x166cac: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x166CB0u;
        goto label_166cb0;
    }
    ctx->pc = 0x166CA8u;
    SET_GPR_U32(ctx, 31, 0x166CB0u);
    ctx->pc = 0x166CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166CA8u;
            // 0x166cac: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437E0u;
    if (runtime->hasFunction(0x1437E0u)) {
        auto targetFn = runtime->lookupFunction(0x1437E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CB0u; }
        if (ctx->pc != 0x166CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPlight__FiPfPfff_0x1437e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CB0u; }
        if (ctx->pc != 0x166CB0u) { return; }
    }
    ctx->pc = 0x166CB0u;
label_166cb0:
    // 0x166cb0: 0x1000000f  b           . + 4 + (0xF << 2)
label_166cb4:
    if (ctx->pc == 0x166CB4u) {
        ctx->pc = 0x166CB4u;
            // 0x166cb4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x166CB8u;
        goto label_166cb8;
    }
    ctx->pc = 0x166CB0u;
    {
        const bool branch_taken_0x166cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166CB0u;
            // 0x166cb4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166cb0) {
            ctx->pc = 0x166CF0u;
            goto label_166cf0;
        }
    }
    ctx->pc = 0x166CB8u;
label_166cb8:
    // 0x166cb8: 0xc050df4  jal         func_1437D0
label_166cbc:
    if (ctx->pc == 0x166CBCu) {
        ctx->pc = 0x166CBCu;
            // 0x166cbc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x166CC0u;
        goto label_166cc0;
    }
    ctx->pc = 0x166CB8u;
    SET_GPR_U32(ctx, 31, 0x166CC0u);
    ctx->pc = 0x166CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166CB8u;
            // 0x166cbc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CC0u; }
        if (ctx->pc != 0x166CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CC0u; }
        if (ctx->pc != 0x166CC0u) { return; }
    }
    ctx->pc = 0x166CC0u;
label_166cc0:
    // 0x166cc0: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x166cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_166cc4:
    // 0x166cc4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x166cc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_166cc8:
    // 0x166cc8: 0x27b2011c  addiu       $s2, $sp, 0x11C
    ctx->pc = 0x166cc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_166ccc:
    // 0x166ccc: 0xc6540000  lwc1        $f20, 0x0($s2)
    ctx->pc = 0x166cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_166cd0:
    // 0x166cd0: 0xc041c4a  jal         func_107128
label_166cd4:
    if (ctx->pc == 0x166CD4u) {
        ctx->pc = 0x166CD4u;
            // 0x166cd4: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x166CD8u;
        goto label_166cd8;
    }
    ctx->pc = 0x166CD0u;
    SET_GPR_U32(ctx, 31, 0x166CD8u);
    ctx->pc = 0x166CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166CD0u;
            // 0x166cd4: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CD8u; }
        if (ctx->pc != 0x166CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CD8u; }
        if (ctx->pc != 0x166CD8u) { return; }
    }
    ctx->pc = 0x166CD8u;
label_166cd8:
    // 0x166cd8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x166cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_166cdc:
    // 0x166cdc: 0xc04bcf4  jal         func_12F3D0
label_166ce0:
    if (ctx->pc == 0x166CE0u) {
        ctx->pc = 0x166CE0u;
            // 0x166ce0: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x166CE4u;
        goto label_166ce4;
    }
    ctx->pc = 0x166CDCu;
    SET_GPR_U32(ctx, 31, 0x166CE4u);
    ctx->pc = 0x166CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166CDCu;
            // 0x166ce0: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CE4u; }
        if (ctx->pc != 0x166CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CE4u; }
        if (ctx->pc != 0x166CE4u) { return; }
    }
    ctx->pc = 0x166CE4u;
label_166ce4:
    // 0x166ce4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x166ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_166ce8:
    // 0x166ce8: 0xc050dec  jal         func_1437B0
label_166cec:
    if (ctx->pc == 0x166CECu) {
        ctx->pc = 0x166CECu;
            // 0x166cec: 0xe6540000  swc1        $f20, 0x0($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->pc = 0x166CF0u;
        goto label_166cf0;
    }
    ctx->pc = 0x166CE8u;
    SET_GPR_U32(ctx, 31, 0x166CF0u);
    ctx->pc = 0x166CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166CE8u;
            // 0x166cec: 0xe6540000  swc1        $f20, 0x0($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CF0u; }
        if (ctx->pc != 0x166CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CF0u; }
        if (ctx->pc != 0x166CF0u) { return; }
    }
    ctx->pc = 0x166CF0u;
label_166cf0:
    // 0x166cf0: 0xc0a762c  jal         func_29D8B0
label_166cf4:
    if (ctx->pc == 0x166CF4u) {
        ctx->pc = 0x166CF4u;
            // 0x166cf4: 0x26a402b0  addiu       $a0, $s5, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
        ctx->pc = 0x166CF8u;
        goto label_166cf8;
    }
    ctx->pc = 0x166CF0u;
    SET_GPR_U32(ctx, 31, 0x166CF8u);
    ctx->pc = 0x166CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166CF0u;
            // 0x166cf4: 0x26a402b0  addiu       $a0, $s5, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CF8u; }
        if (ctx->pc != 0x166CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CF8u; }
        if (ctx->pc != 0x166CF8u) { return; }
    }
    ctx->pc = 0x166CF8u;
label_166cf8:
    // 0x166cf8: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
label_166cfc:
    if (ctx->pc == 0x166CFCu) {
        ctx->pc = 0x166CFCu;
            // 0x166cfc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166D00u;
        goto label_166d00;
    }
    ctx->pc = 0x166CF8u;
    {
        const bool branch_taken_0x166cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166CF8u;
            // 0x166cfc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166cf8) {
            ctx->pc = 0x166B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166b50;
        }
    }
    ctx->pc = 0x166D00u;
label_166d00:
    // 0x166d00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x166d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166d04:
    // 0x166d04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x166d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166d08:
    // 0x166d08: 0x8eb200b0  lw          $s2, 0xB0($s5)
    ctx->pc = 0x166d08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
label_166d0c:
    // 0x166d0c: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
label_166d10:
    if (ctx->pc == 0x166D10u) {
        ctx->pc = 0x166D14u;
        goto label_166d14;
    }
    ctx->pc = 0x166D0Cu;
    {
        const bool branch_taken_0x166d0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d0c) {
            ctx->pc = 0x166DC4u;
            goto label_166dc4;
        }
    }
    ctx->pc = 0x166D14u;
label_166d14:
    // 0x166d14: 0x0  nop
    ctx->pc = 0x166d14u;
    // NOP
label_166d18:
    // 0x166d18: 0xc6ac02fc  lwc1        $f12, 0x2FC($s5)
    ctx->pc = 0x166d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_166d1c:
    // 0x166d1c: 0xc64d00a4  lwc1        $f13, 0xA4($s2)
    ctx->pc = 0x166d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_166d20:
    // 0x166d20: 0xc64e00a8  lwc1        $f14, 0xA8($s2)
    ctx->pc = 0x166d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_166d24:
    // 0x166d24: 0xc0a7124  jal         func_29C490
label_166d28:
    if (ctx->pc == 0x166D28u) {
        ctx->pc = 0x166D28u;
            // 0x166d28: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x166D2Cu;
        goto label_166d2c;
    }
    ctx->pc = 0x166D24u;
    SET_GPR_U32(ctx, 31, 0x166D2Cu);
    ctx->pc = 0x166D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166D24u;
            // 0x166d28: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C490u;
    if (runtime->hasFunction(0x29C490u)) {
        auto targetFn = runtime->lookupFunction(0x29C490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D2Cu; }
        if (ctx->pc != 0x166D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTime__Ffff_0x29c490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D2Cu; }
        if (ctx->pc != 0x166D2Cu) { return; }
    }
    ctx->pc = 0x166D2Cu;
label_166d2c:
    // 0x166d2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_166d30:
    if (ctx->pc == 0x166D30u) {
        ctx->pc = 0x166D34u;
        goto label_166d34;
    }
    ctx->pc = 0x166D2Cu;
    {
        const bool branch_taken_0x166d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d2c) {
            ctx->pc = 0x166D48u;
            goto label_166d48;
        }
    }
    ctx->pc = 0x166D34u;
label_166d34:
    // 0x166d34: 0x8e630068  lw          $v1, 0x68($s3)
    ctx->pc = 0x166d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_166d38:
    // 0x166d38: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x166d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_166d3c:
    // 0x166d3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x166d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_166d40:
    // 0x166d40: 0x10000004  b           . + 4 + (0x4 << 2)
label_166d44:
    if (ctx->pc == 0x166D44u) {
        ctx->pc = 0x166D44u;
            // 0x166d44: 0xae620068  sw          $v0, 0x68($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
        ctx->pc = 0x166D48u;
        goto label_166d48;
    }
    ctx->pc = 0x166D40u;
    {
        const bool branch_taken_0x166d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166D40u;
            // 0x166d44: 0xae620068  sw          $v0, 0x68($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d40) {
            ctx->pc = 0x166D54u;
            goto label_166d54;
        }
    }
    ctx->pc = 0x166D48u;
label_166d48:
    // 0x166d48: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x166d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_166d4c:
    // 0x166d4c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x166d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_166d50:
    // 0x166d50: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x166d50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_166d54:
    // 0x166d54: 0x0  nop
    ctx->pc = 0x166d54u;
    // NOP
label_166d58:
    // 0x166d58: 0x8e740070  lw          $s4, 0x70($s3)
    ctx->pc = 0x166d58u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_166d5c:
    // 0x166d5c: 0x12800016  beqz        $s4, . + 4 + (0x16 << 2)
label_166d60:
    if (ctx->pc == 0x166D60u) {
        ctx->pc = 0x166D64u;
        goto label_166d64;
    }
    ctx->pc = 0x166D5Cu;
    {
        const bool branch_taken_0x166d5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d5c) {
            ctx->pc = 0x166DB8u;
            goto label_166db8;
        }
    }
    ctx->pc = 0x166D64u;
label_166d64:
    // 0x166d64: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x166d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_166d68:
    // 0x166d68: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_166d6c:
    if (ctx->pc == 0x166D6Cu) {
        ctx->pc = 0x166D6Cu;
            // 0x166d6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166D70u;
        goto label_166d70;
    }
    ctx->pc = 0x166D68u;
    {
        const bool branch_taken_0x166d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166D68u;
            // 0x166d6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d68) {
            ctx->pc = 0x166DB8u;
            goto label_166db8;
        }
    }
    ctx->pc = 0x166D70u;
label_166d70:
    // 0x166d70: 0xc04db0c  jal         func_136C30
label_166d74:
    if (ctx->pc == 0x166D74u) {
        ctx->pc = 0x166D74u;
            // 0x166d74: 0x26a500c0  addiu       $a1, $s5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
        ctx->pc = 0x166D78u;
        goto label_166d78;
    }
    ctx->pc = 0x166D70u;
    SET_GPR_U32(ctx, 31, 0x166D78u);
    ctx->pc = 0x166D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166D70u;
            // 0x166d74: 0x26a500c0  addiu       $a1, $s5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D78u; }
        if (ctx->pc != 0x166D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D78u; }
        if (ctx->pc != 0x166D78u) { return; }
    }
    ctx->pc = 0x166D78u;
label_166d78:
    // 0x166d78: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
label_166d7c:
    if (ctx->pc == 0x166D7Cu) {
        ctx->pc = 0x166D80u;
        goto label_166d80;
    }
    ctx->pc = 0x166D78u;
    {
        const bool branch_taken_0x166d78 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x166d78) {
            ctx->pc = 0x166D98u;
            goto label_166d98;
        }
    }
    ctx->pc = 0x166D80u;
label_166d80:
    // 0x166d80: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x166d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_166d84:
    // 0x166d84: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x166d84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_166d88:
    // 0x166d88: 0x320f809  jalr        $t9
label_166d8c:
    if (ctx->pc == 0x166D8Cu) {
        ctx->pc = 0x166D8Cu;
            // 0x166d8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166D90u;
        goto label_166d90;
    }
    ctx->pc = 0x166D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x166D90u);
        ctx->pc = 0x166D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166D88u;
            // 0x166d8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x166D90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166D90u; }
            if (ctx->pc != 0x166D90u) { return; }
        }
        }
    }
    ctx->pc = 0x166D90u;
label_166d90:
    // 0x166d90: 0x10000006  b           . + 4 + (0x6 << 2)
label_166d94:
    if (ctx->pc == 0x166D94u) {
        ctx->pc = 0x166D94u;
            // 0x166d94: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x166D98u;
        goto label_166d98;
    }
    ctx->pc = 0x166D90u;
    {
        const bool branch_taken_0x166d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166D90u;
            // 0x166d94: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d90) {
            ctx->pc = 0x166DACu;
            goto label_166dac;
        }
    }
    ctx->pc = 0x166D98u;
label_166d98:
    // 0x166d98: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x166d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_166d9c:
    // 0x166d9c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x166d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_166da0:
    // 0x166da0: 0x320f809  jalr        $t9
label_166da4:
    if (ctx->pc == 0x166DA4u) {
        ctx->pc = 0x166DA4u;
            // 0x166da4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166DA8u;
        goto label_166da8;
    }
    ctx->pc = 0x166DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x166DA8u);
        ctx->pc = 0x166DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166DA0u;
            // 0x166da4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x166DA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166DA8u; }
            if (ctx->pc != 0x166DA8u) { return; }
        }
        }
    }
    ctx->pc = 0x166DA8u;
label_166da8:
    // 0x166da8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x166da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_166dac:
    // 0x166dac: 0x0  nop
    ctx->pc = 0x166dacu;
    // NOP
label_166db0:
    // 0x166db0: 0xc04db18  jal         func_136C60
label_166db4:
    if (ctx->pc == 0x166DB4u) {
        ctx->pc = 0x166DB4u;
            // 0x166db4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166DB8u;
        goto label_166db8;
    }
    ctx->pc = 0x166DB0u;
    SET_GPR_U32(ctx, 31, 0x166DB8u);
    ctx->pc = 0x166DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166DB0u;
            // 0x166db4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166DB8u; }
        if (ctx->pc != 0x166DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166DB8u; }
        if (ctx->pc != 0x166DB8u) { return; }
    }
    ctx->pc = 0x166DB8u;
label_166db8:
    // 0x166db8: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x166db8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_166dbc:
    // 0x166dbc: 0x1640ffd5  bnez        $s2, . + 4 + (-0x2B << 2)
label_166dc0:
    if (ctx->pc == 0x166DC0u) {
        ctx->pc = 0x166DC4u;
        goto label_166dc4;
    }
    ctx->pc = 0x166DBCu;
    {
        const bool branch_taken_0x166dbc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x166dbc) {
            ctx->pc = 0x166D14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166d14;
        }
    }
    ctx->pc = 0x166DC4u;
label_166dc4:
    // 0x166dc4: 0x0  nop
    ctx->pc = 0x166dc4u;
    // NOP
label_166dc8:
    // 0x166dc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x166dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_166dcc:
    // 0x166dcc: 0x1a00ffce  blez        $s0, . + 4 + (-0x32 << 2)
label_166dd0:
    if (ctx->pc == 0x166DD0u) {
        ctx->pc = 0x166DD4u;
        goto label_166dd4;
    }
    ctx->pc = 0x166DCCu;
    {
        const bool branch_taken_0x166dcc = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x166dcc) {
            ctx->pc = 0x166D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166d08;
        }
    }
    ctx->pc = 0x166DD4u;
label_166dd4:
    // 0x166dd4: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_166dd8:
    if (ctx->pc == 0x166DD8u) {
        ctx->pc = 0x166DD8u;
            // 0x166dd8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166DDCu;
        goto label_166ddc;
    }
    ctx->pc = 0x166DD4u;
    {
        const bool branch_taken_0x166dd4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x166DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166DD4u;
            // 0x166dd8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166dd4) {
            ctx->pc = 0x166DE4u;
            goto label_166de4;
        }
    }
    ctx->pc = 0x166DDCu;
label_166ddc:
    // 0x166ddc: 0xc050dc8  jal         func_143720
label_166de0:
    if (ctx->pc == 0x166DE0u) {
        ctx->pc = 0x166DE0u;
            // 0x166de0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166DE4u;
        goto label_166de4;
    }
    ctx->pc = 0x166DDCu;
    SET_GPR_U32(ctx, 31, 0x166DE4u);
    ctx->pc = 0x166DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166DDCu;
            // 0x166de0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166DE4u; }
        if (ctx->pc != 0x166DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166DE4u; }
        if (ctx->pc != 0x166DE4u) { return; }
    }
    ctx->pc = 0x166DE4u;
label_166de4:
    // 0x166de4: 0xc050e40  jal         func_143900
label_166de8:
    if (ctx->pc == 0x166DE8u) {
        ctx->pc = 0x166DE8u;
            // 0x166de8: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->pc = 0x166DECu;
        goto label_166dec;
    }
    ctx->pc = 0x166DE4u;
    SET_GPR_U32(ctx, 31, 0x166DECu);
    ctx->pc = 0x166DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166DE4u;
            // 0x166de8: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166DECu; }
        if (ctx->pc != 0x166DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166DECu; }
        if (ctx->pc != 0x166DECu) { return; }
    }
    ctx->pc = 0x166DECu;
label_166dec:
    // 0x166dec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x166decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166df0:
    // 0x166df0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x166df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_166df4:
    // 0x166df4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x166df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_166df8:
    // 0x166df8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x166df8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_166dfc:
    // 0x166dfc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x166dfcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_166e00:
    // 0x166e00: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x166e00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_166e04:
    // 0x166e04: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x166e04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_166e08:
    // 0x166e08: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x166e08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_166e0c:
    // 0x166e0c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x166e0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_166e10:
    // 0x166e10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x166e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_166e14:
    // 0x166e14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x166e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_166e18:
    // 0x166e18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x166e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_166e1c:
    // 0x166e1c: 0x3e00008  jr          $ra
label_166e20:
    if (ctx->pc == 0x166E20u) {
        ctx->pc = 0x166E20u;
            // 0x166e20: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x166E24u;
        goto label_fallthrough_0x166e1c;
    }
    ctx->pc = 0x166E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166E1Cu;
            // 0x166e20: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x166e1c:
    ctx->pc = 0x166E24u;
}
