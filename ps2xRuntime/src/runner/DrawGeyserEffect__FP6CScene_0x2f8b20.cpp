#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawGeyserEffect__FP6CScene
// Address: 0x2f8b20 - 0x2f8cb8
void DrawGeyserEffect__FP6CScene_0x2f8b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawGeyserEffect__FP6CScene_0x2f8b20");
#endif

    switch (ctx->pc) {
        case 0x2f8b20u: goto label_2f8b20;
        case 0x2f8b24u: goto label_2f8b24;
        case 0x2f8b28u: goto label_2f8b28;
        case 0x2f8b2cu: goto label_2f8b2c;
        case 0x2f8b30u: goto label_2f8b30;
        case 0x2f8b34u: goto label_2f8b34;
        case 0x2f8b38u: goto label_2f8b38;
        case 0x2f8b3cu: goto label_2f8b3c;
        case 0x2f8b40u: goto label_2f8b40;
        case 0x2f8b44u: goto label_2f8b44;
        case 0x2f8b48u: goto label_2f8b48;
        case 0x2f8b4cu: goto label_2f8b4c;
        case 0x2f8b50u: goto label_2f8b50;
        case 0x2f8b54u: goto label_2f8b54;
        case 0x2f8b58u: goto label_2f8b58;
        case 0x2f8b5cu: goto label_2f8b5c;
        case 0x2f8b60u: goto label_2f8b60;
        case 0x2f8b64u: goto label_2f8b64;
        case 0x2f8b68u: goto label_2f8b68;
        case 0x2f8b6cu: goto label_2f8b6c;
        case 0x2f8b70u: goto label_2f8b70;
        case 0x2f8b74u: goto label_2f8b74;
        case 0x2f8b78u: goto label_2f8b78;
        case 0x2f8b7cu: goto label_2f8b7c;
        case 0x2f8b80u: goto label_2f8b80;
        case 0x2f8b84u: goto label_2f8b84;
        case 0x2f8b88u: goto label_2f8b88;
        case 0x2f8b8cu: goto label_2f8b8c;
        case 0x2f8b90u: goto label_2f8b90;
        case 0x2f8b94u: goto label_2f8b94;
        case 0x2f8b98u: goto label_2f8b98;
        case 0x2f8b9cu: goto label_2f8b9c;
        case 0x2f8ba0u: goto label_2f8ba0;
        case 0x2f8ba4u: goto label_2f8ba4;
        case 0x2f8ba8u: goto label_2f8ba8;
        case 0x2f8bacu: goto label_2f8bac;
        case 0x2f8bb0u: goto label_2f8bb0;
        case 0x2f8bb4u: goto label_2f8bb4;
        case 0x2f8bb8u: goto label_2f8bb8;
        case 0x2f8bbcu: goto label_2f8bbc;
        case 0x2f8bc0u: goto label_2f8bc0;
        case 0x2f8bc4u: goto label_2f8bc4;
        case 0x2f8bc8u: goto label_2f8bc8;
        case 0x2f8bccu: goto label_2f8bcc;
        case 0x2f8bd0u: goto label_2f8bd0;
        case 0x2f8bd4u: goto label_2f8bd4;
        case 0x2f8bd8u: goto label_2f8bd8;
        case 0x2f8bdcu: goto label_2f8bdc;
        case 0x2f8be0u: goto label_2f8be0;
        case 0x2f8be4u: goto label_2f8be4;
        case 0x2f8be8u: goto label_2f8be8;
        case 0x2f8becu: goto label_2f8bec;
        case 0x2f8bf0u: goto label_2f8bf0;
        case 0x2f8bf4u: goto label_2f8bf4;
        case 0x2f8bf8u: goto label_2f8bf8;
        case 0x2f8bfcu: goto label_2f8bfc;
        case 0x2f8c00u: goto label_2f8c00;
        case 0x2f8c04u: goto label_2f8c04;
        case 0x2f8c08u: goto label_2f8c08;
        case 0x2f8c0cu: goto label_2f8c0c;
        case 0x2f8c10u: goto label_2f8c10;
        case 0x2f8c14u: goto label_2f8c14;
        case 0x2f8c18u: goto label_2f8c18;
        case 0x2f8c1cu: goto label_2f8c1c;
        case 0x2f8c20u: goto label_2f8c20;
        case 0x2f8c24u: goto label_2f8c24;
        case 0x2f8c28u: goto label_2f8c28;
        case 0x2f8c2cu: goto label_2f8c2c;
        case 0x2f8c30u: goto label_2f8c30;
        case 0x2f8c34u: goto label_2f8c34;
        case 0x2f8c38u: goto label_2f8c38;
        case 0x2f8c3cu: goto label_2f8c3c;
        case 0x2f8c40u: goto label_2f8c40;
        case 0x2f8c44u: goto label_2f8c44;
        case 0x2f8c48u: goto label_2f8c48;
        case 0x2f8c4cu: goto label_2f8c4c;
        case 0x2f8c50u: goto label_2f8c50;
        case 0x2f8c54u: goto label_2f8c54;
        case 0x2f8c58u: goto label_2f8c58;
        case 0x2f8c5cu: goto label_2f8c5c;
        case 0x2f8c60u: goto label_2f8c60;
        case 0x2f8c64u: goto label_2f8c64;
        case 0x2f8c68u: goto label_2f8c68;
        case 0x2f8c6cu: goto label_2f8c6c;
        case 0x2f8c70u: goto label_2f8c70;
        case 0x2f8c74u: goto label_2f8c74;
        case 0x2f8c78u: goto label_2f8c78;
        case 0x2f8c7cu: goto label_2f8c7c;
        case 0x2f8c80u: goto label_2f8c80;
        case 0x2f8c84u: goto label_2f8c84;
        case 0x2f8c88u: goto label_2f8c88;
        case 0x2f8c8cu: goto label_2f8c8c;
        case 0x2f8c90u: goto label_2f8c90;
        case 0x2f8c94u: goto label_2f8c94;
        case 0x2f8c98u: goto label_2f8c98;
        case 0x2f8c9cu: goto label_2f8c9c;
        case 0x2f8ca0u: goto label_2f8ca0;
        case 0x2f8ca4u: goto label_2f8ca4;
        case 0x2f8ca8u: goto label_2f8ca8;
        case 0x2f8cacu: goto label_2f8cac;
        case 0x2f8cb0u: goto label_2f8cb0;
        case 0x2f8cb4u: goto label_2f8cb4;
        default: break;
    }

    ctx->pc = 0x2f8b20u;

label_2f8b20:
    // 0x2f8b20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f8b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2f8b24:
    // 0x2f8b24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f8b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2f8b28:
    // 0x2f8b28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f8b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f8b2c:
    // 0x2f8b2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f8b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f8b30:
    // 0x2f8b30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f8b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f8b34:
    // 0x2f8b34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f8b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f8b38:
    // 0x2f8b38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f8b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f8b3c:
    // 0x2f8b3c: 0x8f839f38  lw          $v1, -0x60C8($gp)
    ctx->pc = 0x2f8b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942520)));
label_2f8b40:
    // 0x2f8b40: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
label_2f8b44:
    if (ctx->pc == 0x2F8B44u) {
        ctx->pc = 0x2F8B48u;
        goto label_2f8b48;
    }
    ctx->pc = 0x2F8B40u;
    {
        const bool branch_taken_0x2f8b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b40) {
            ctx->pc = 0x2F8C98u;
            goto label_2f8c98;
        }
    }
    ctx->pc = 0x2F8B48u;
label_2f8b48:
    // 0x2f8b48: 0xc0a0f58  jal         func_283D60
label_2f8b4c:
    if (ctx->pc == 0x2F8B4Cu) {
        ctx->pc = 0x2F8B4Cu;
            // 0x2f8b4c: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x2F8B50u;
        goto label_2f8b50;
    }
    ctx->pc = 0x2F8B48u;
    SET_GPR_U32(ctx, 31, 0x2F8B50u);
    ctx->pc = 0x2F8B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8B48u;
            // 0x2f8b4c: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8B50u; }
        if (ctx->pc != 0x2F8B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8B50u; }
        if (ctx->pc != 0x2F8B50u) { return; }
    }
    ctx->pc = 0x2F8B50u;
label_2f8b50:
    // 0x2f8b50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f8b50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b54:
    // 0x2f8b54: 0x12400050  beqz        $s2, . + 4 + (0x50 << 2)
label_2f8b58:
    if (ctx->pc == 0x2F8B58u) {
        ctx->pc = 0x2F8B58u;
            // 0x2f8b58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B5Cu;
        goto label_2f8b5c;
    }
    ctx->pc = 0x2F8B54u;
    {
        const bool branch_taken_0x2f8b54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8B54u;
            // 0x2f8b58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b54) {
            ctx->pc = 0x2F8C98u;
            goto label_2f8c98;
        }
    }
    ctx->pc = 0x2F8B5Cu;
label_2f8b5c:
    // 0x2f8b5c: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x2f8b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2f8b60:
    // 0x2f8b60: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2f8b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f8b64:
    // 0x2f8b64: 0xc0bb9dc  jal         func_2EE770
label_2f8b68:
    if (ctx->pc == 0x2F8B68u) {
        ctx->pc = 0x2F8B68u;
            // 0x2f8b68: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2F8B6Cu;
        goto label_2f8b6c;
    }
    ctx->pc = 0x2F8B64u;
    SET_GPR_U32(ctx, 31, 0x2F8B6Cu);
    ctx->pc = 0x2F8B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8B64u;
            // 0x2f8b68: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8B6Cu; }
        if (ctx->pc != 0x2F8B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8B6Cu; }
        if (ctx->pc != 0x2F8B6Cu) { return; }
    }
    ctx->pc = 0x2F8B6Cu;
label_2f8b6c:
    // 0x2f8b6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f8b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b70:
    // 0x2f8b70: 0x1a000049  blez        $s0, . + 4 + (0x49 << 2)
label_2f8b74:
    if (ctx->pc == 0x2F8B74u) {
        ctx->pc = 0x2F8B78u;
        goto label_2f8b78;
    }
    ctx->pc = 0x2F8B70u;
    {
        const bool branch_taken_0x2f8b70 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2f8b70) {
            ctx->pc = 0x2F8C98u;
            goto label_2f8c98;
        }
    }
    ctx->pc = 0x2F8B78u;
label_2f8b78:
    // 0x2f8b78: 0xc050840  jal         func_142100
label_2f8b7c:
    if (ctx->pc == 0x2F8B7Cu) {
        ctx->pc = 0x2F8B80u;
        goto label_2f8b80;
    }
    ctx->pc = 0x2F8B78u;
    SET_GPR_U32(ctx, 31, 0x2F8B80u);
    ctx->pc = 0x142100u;
    if (runtime->hasFunction(0x142100u)) {
        auto targetFn = runtime->lookupFunction(0x142100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8B80u; }
        if (ctx->pc != 0x2F8B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetDataBuffer__Fv_0x142100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8B80u; }
        if (ctx->pc != 0x2F8B80u) { return; }
    }
    ctx->pc = 0x2F8B80u;
label_2f8b80:
    // 0x2f8b80: 0x8f859f3c  lw          $a1, -0x60C4($gp)
    ctx->pc = 0x2f8b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942524)));
label_2f8b84:
    // 0x2f8b84: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2f8b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2f8b88:
    // 0x2f8b88: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2f8b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_2f8b8c:
    // 0x2f8b8c: 0xc04ba14  jal         func_12E850
label_2f8b90:
    if (ctx->pc == 0x2F8B90u) {
        ctx->pc = 0x2F8B90u;
            // 0x2f8b90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B94u;
        goto label_2f8b94;
    }
    ctx->pc = 0x2F8B8Cu;
    SET_GPR_U32(ctx, 31, 0x2F8B94u);
    ctx->pc = 0x2F8B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8B8Cu;
            // 0x2f8b90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8B94u; }
        if (ctx->pc != 0x2F8B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8B94u; }
        if (ctx->pc != 0x2F8B94u) { return; }
    }
    ctx->pc = 0x2F8B94u;
label_2f8b94:
    // 0x2f8b94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f8b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b98:
    // 0x2f8b98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f8b98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b9c:
    // 0x2f8b9c: 0x8f829f48  lw          $v0, -0x60B8($gp)
    ctx->pc = 0x2f8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942536)));
label_2f8ba0:
    // 0x2f8ba0: 0xc0be168  jal         func_2F85A0
label_2f8ba4:
    if (ctx->pc == 0x2F8BA4u) {
        ctx->pc = 0x2F8BA4u;
            // 0x2f8ba4: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x2F8BA8u;
        goto label_2f8ba8;
    }
    ctx->pc = 0x2F8BA0u;
    SET_GPR_U32(ctx, 31, 0x2F8BA8u);
    ctx->pc = 0x2F8BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8BA0u;
            // 0x2f8ba4: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F85A0u;
    if (runtime->hasFunction(0x2F85A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F85A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8BA8u; }
        if (ctx->pc != 0x2F8BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePacket__13CGeyserEffectFv_0x2f85a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8BA8u; }
        if (ctx->pc != 0x2F8BA8u) { return; }
    }
    ctx->pc = 0x2F8BA8u;
label_2f8ba8:
    // 0x2f8ba8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f8ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f8bac:
    // 0x2f8bac: 0x26730080  addiu       $s3, $s3, 0x80
    ctx->pc = 0x2f8bacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_2f8bb0:
    // 0x2f8bb0: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x2f8bb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f8bb4:
    // 0x2f8bb4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_2f8bb8:
    if (ctx->pc == 0x2F8BB8u) {
        ctx->pc = 0x2F8BBCu;
        goto label_2f8bbc;
    }
    ctx->pc = 0x2F8BB4u;
    {
        const bool branch_taken_0x2f8bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8bb4) {
            ctx->pc = 0x2F8B9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8b9c;
        }
    }
    ctx->pc = 0x2F8BBCu;
label_2f8bbc:
    // 0x2f8bbc: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2f8bbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2f8bc0:
    // 0x2f8bc0: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
label_2f8bc4:
    if (ctx->pc == 0x2F8BC4u) {
        ctx->pc = 0x2F8BC4u;
            // 0x2f8bc4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BC8u;
        goto label_2f8bc8;
    }
    ctx->pc = 0x2F8BC0u;
    {
        const bool branch_taken_0x2f8bc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8BC0u;
            // 0x2f8bc4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8bc0) {
            ctx->pc = 0x2F8C98u;
            goto label_2f8c98;
        }
    }
    ctx->pc = 0x2F8BC8u;
label_2f8bc8:
    // 0x2f8bc8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f8bc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8bcc:
    // 0x2f8bcc: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2f8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_2f8bd0:
    // 0x2f8bd0: 0x24510060  addiu       $s1, $v0, 0x60
    ctx->pc = 0x2f8bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2f8bd4:
    // 0x2f8bd4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f8bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8bd8:
    // 0x2f8bd8: 0xc06c310  jal         func_1B0C40
label_2f8bdc:
    if (ctx->pc == 0x2F8BDCu) {
        ctx->pc = 0x2F8BDCu;
            // 0x2f8bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BE0u;
        goto label_2f8be0;
    }
    ctx->pc = 0x2F8BD8u;
    SET_GPR_U32(ctx, 31, 0x2F8BE0u);
    ctx->pc = 0x2F8BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8BD8u;
            // 0x2f8bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8BE0u; }
        if (ctx->pc != 0x2F8BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8BE0u; }
        if (ctx->pc != 0x2F8BE0u) { return; }
    }
    ctx->pc = 0x2F8BE0u;
label_2f8be0:
    // 0x2f8be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f8be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8be4:
    // 0x2f8be4: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
label_2f8be8:
    if (ctx->pc == 0x2F8BE8u) {
        ctx->pc = 0x2F8BECu;
        goto label_2f8bec;
    }
    ctx->pc = 0x2F8BE4u;
    {
        const bool branch_taken_0x2f8be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8be4) {
            ctx->pc = 0x2F8C88u;
            goto label_2f8c88;
        }
    }
    ctx->pc = 0x2F8BECu;
label_2f8bec:
    // 0x2f8bec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f8becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8bf0:
    // 0x2f8bf0: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x2f8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_2f8bf4:
    // 0x2f8bf4: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x2f8bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2f8bf8:
    // 0x2f8bf8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2f8bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2f8bfc:
    // 0x2f8bfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f8bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f8c00:
    // 0x2f8c00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f8c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f8c04:
    // 0x2f8c04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f8c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2f8c08:
    // 0x2f8c08: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2f8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2f8c0c:
    // 0x2f8c0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f8c10:
    // 0x2f8c10: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2f8c10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2f8c14:
    // 0x2f8c14: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_2f8c18:
    if (ctx->pc == 0x2F8C18u) {
        ctx->pc = 0x2F8C18u;
            // 0x2f8c18: 0x30510003  andi        $s1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x2F8C1Cu;
        goto label_2f8c1c;
    }
    ctx->pc = 0x2F8C14u;
    {
        const bool branch_taken_0x2f8c14 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F8C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8C14u;
            // 0x2f8c18: 0x30510003  andi        $s1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c14) {
            ctx->pc = 0x2F8C28u;
            goto label_2f8c28;
        }
    }
    ctx->pc = 0x2F8C1Cu;
label_2f8c1c:
    // 0x2f8c1c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_2f8c20:
    if (ctx->pc == 0x2F8C20u) {
        ctx->pc = 0x2F8C24u;
        goto label_2f8c24;
    }
    ctx->pc = 0x2F8C1Cu;
    {
        const bool branch_taken_0x2f8c1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8c1c) {
            ctx->pc = 0x2F8C28u;
            goto label_2f8c28;
        }
    }
    ctx->pc = 0x2F8C24u;
label_2f8c24:
    // 0x2f8c24: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x2f8c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_2f8c28:
    // 0x2f8c28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f8c28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8c2c:
    // 0x2f8c2c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2f8c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2f8c30:
    // 0x2f8c30: 0x320f809  jalr        $t9
label_2f8c34:
    if (ctx->pc == 0x2F8C34u) {
        ctx->pc = 0x2F8C34u;
            // 0x2f8c34: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2F8C38u;
        goto label_2f8c38;
    }
    ctx->pc = 0x2F8C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8C38u);
        ctx->pc = 0x2F8C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8C30u;
            // 0x2f8c34: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8C38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8C38u; }
            if (ctx->pc != 0x2F8C38u) { return; }
        }
        }
    }
    ctx->pc = 0x2F8C38u;
label_2f8c38:
    // 0x2f8c38: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_2f8c3c:
    if (ctx->pc == 0x2F8C3Cu) {
        ctx->pc = 0x2F8C3Cu;
            // 0x2f8c3c: 0x32220003  andi        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x2F8C40u;
        goto label_2f8c40;
    }
    ctx->pc = 0x2F8C38u;
    {
        const bool branch_taken_0x2f8c38 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2F8C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8C38u;
            // 0x2f8c3c: 0x32220003  andi        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c38) {
            ctx->pc = 0x2F8C4Cu;
            goto label_2f8c4c;
        }
    }
    ctx->pc = 0x2F8C40u;
label_2f8c40:
    // 0x2f8c40: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f8c44:
    if (ctx->pc == 0x2F8C44u) {
        ctx->pc = 0x2F8C48u;
        goto label_2f8c48;
    }
    ctx->pc = 0x2F8C40u;
    {
        const bool branch_taken_0x2f8c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8c40) {
            ctx->pc = 0x2F8C4Cu;
            goto label_2f8c4c;
        }
    }
    ctx->pc = 0x2F8C48u;
label_2f8c48:
    // 0x2f8c48: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2f8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2f8c4c:
    // 0x2f8c4c: 0x8f849f40  lw          $a0, -0x60C0($gp)
    ctx->pc = 0x2f8c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942528)));
label_2f8c50:
    // 0x2f8c50: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x2f8c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_2f8c54:
    // 0x2f8c54: 0x8f829f48  lw          $v0, -0x60B8($gp)
    ctx->pc = 0x2f8c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942536)));
label_2f8c58:
    // 0x2f8c58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f8c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8c5c:
    // 0x2f8c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f8c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f8c60:
    // 0x2f8c60: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x2f8c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_2f8c64:
    // 0x2f8c64: 0x320f809  jalr        $t9
label_2f8c68:
    if (ctx->pc == 0x2F8C68u) {
        ctx->pc = 0x2F8C68u;
            // 0x2f8c68: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x2F8C6Cu;
        goto label_2f8c6c;
    }
    ctx->pc = 0x2F8C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8C6Cu);
        ctx->pc = 0x2F8C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8C64u;
            // 0x2f8c68: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8C6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8C6Cu; }
            if (ctx->pc != 0x2F8C6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F8C6Cu;
label_2f8c6c:
    // 0x2f8c6c: 0x8f849f40  lw          $a0, -0x60C0($gp)
    ctx->pc = 0x2f8c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942528)));
label_2f8c70:
    // 0x2f8c70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f8c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8c74:
    // 0x2f8c74: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f8c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f8c78:
    // 0x2f8c78: 0x320f809  jalr        $t9
label_2f8c7c:
    if (ctx->pc == 0x2F8C7Cu) {
        ctx->pc = 0x2F8C7Cu;
            // 0x2f8c7c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2F8C80u;
        goto label_2f8c80;
    }
    ctx->pc = 0x2F8C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8C80u);
        ctx->pc = 0x2F8C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8C78u;
            // 0x2f8c7c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8C80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8C80u; }
            if (ctx->pc != 0x2F8C80u) { return; }
        }
        }
    }
    ctx->pc = 0x2F8C80u;
label_2f8c80:
    // 0x2f8c80: 0xc050bf4  jal         func_142FD0
label_2f8c84:
    if (ctx->pc == 0x2F8C84u) {
        ctx->pc = 0x2F8C84u;
            // 0x2f8c84: 0x8f849f40  lw          $a0, -0x60C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942528)));
        ctx->pc = 0x2F8C88u;
        goto label_2f8c88;
    }
    ctx->pc = 0x2F8C80u;
    SET_GPR_U32(ctx, 31, 0x2F8C88u);
    ctx->pc = 0x2F8C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8C80u;
            // 0x2f8c84: 0x8f849f40  lw          $a0, -0x60C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8C88u; }
        if (ctx->pc != 0x2F8C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8C88u; }
        if (ctx->pc != 0x2F8C88u) { return; }
    }
    ctx->pc = 0x2F8C88u;
label_2f8c88:
    // 0x2f8c88: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2f8c88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2f8c8c:
    // 0x2f8c8c: 0x290182a  slt         $v1, $s4, $s0
    ctx->pc = 0x2f8c8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2f8c90:
    // 0x2f8c90: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
label_2f8c94:
    if (ctx->pc == 0x2F8C94u) {
        ctx->pc = 0x2F8C94u;
            // 0x2f8c94: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2F8C98u;
        goto label_2f8c98;
    }
    ctx->pc = 0x2F8C90u;
    {
        const bool branch_taken_0x2f8c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8C90u;
            // 0x2f8c94: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c90) {
            ctx->pc = 0x2F8BCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8bcc;
        }
    }
    ctx->pc = 0x2F8C98u;
label_2f8c98:
    // 0x2f8c98: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f8c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f8c9c:
    // 0x2f8c9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f8c9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f8ca0:
    // 0x2f8ca0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f8ca0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f8ca4:
    // 0x2f8ca4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f8ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f8ca8:
    // 0x2f8ca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f8ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f8cac:
    // 0x2f8cac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f8cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f8cb0:
    // 0x2f8cb0: 0x3e00008  jr          $ra
label_2f8cb4:
    if (ctx->pc == 0x2F8CB4u) {
        ctx->pc = 0x2F8CB4u;
            // 0x2f8cb4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2F8CB8u;
        goto label_fallthrough_0x2f8cb0;
    }
    ctx->pc = 0x2F8CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8CB0u;
            // 0x2f8cb4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f8cb0:
    ctx->pc = 0x2F8CB8u;
}
