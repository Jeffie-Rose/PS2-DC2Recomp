#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: HumanTameMoveIF__12CActionCharaFv
// Address: 0x16d8e0 - 0x16da9c
void HumanTameMoveIF__12CActionCharaFv_0x16d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HumanTameMoveIF__12CActionCharaFv_0x16d8e0");
#endif

    switch (ctx->pc) {
        case 0x16d8e0u: goto label_16d8e0;
        case 0x16d8e4u: goto label_16d8e4;
        case 0x16d8e8u: goto label_16d8e8;
        case 0x16d8ecu: goto label_16d8ec;
        case 0x16d8f0u: goto label_16d8f0;
        case 0x16d8f4u: goto label_16d8f4;
        case 0x16d8f8u: goto label_16d8f8;
        case 0x16d8fcu: goto label_16d8fc;
        case 0x16d900u: goto label_16d900;
        case 0x16d904u: goto label_16d904;
        case 0x16d908u: goto label_16d908;
        case 0x16d90cu: goto label_16d90c;
        case 0x16d910u: goto label_16d910;
        case 0x16d914u: goto label_16d914;
        case 0x16d918u: goto label_16d918;
        case 0x16d91cu: goto label_16d91c;
        case 0x16d920u: goto label_16d920;
        case 0x16d924u: goto label_16d924;
        case 0x16d928u: goto label_16d928;
        case 0x16d92cu: goto label_16d92c;
        case 0x16d930u: goto label_16d930;
        case 0x16d934u: goto label_16d934;
        case 0x16d938u: goto label_16d938;
        case 0x16d93cu: goto label_16d93c;
        case 0x16d940u: goto label_16d940;
        case 0x16d944u: goto label_16d944;
        case 0x16d948u: goto label_16d948;
        case 0x16d94cu: goto label_16d94c;
        case 0x16d950u: goto label_16d950;
        case 0x16d954u: goto label_16d954;
        case 0x16d958u: goto label_16d958;
        case 0x16d95cu: goto label_16d95c;
        case 0x16d960u: goto label_16d960;
        case 0x16d964u: goto label_16d964;
        case 0x16d968u: goto label_16d968;
        case 0x16d96cu: goto label_16d96c;
        case 0x16d970u: goto label_16d970;
        case 0x16d974u: goto label_16d974;
        case 0x16d978u: goto label_16d978;
        case 0x16d97cu: goto label_16d97c;
        case 0x16d980u: goto label_16d980;
        case 0x16d984u: goto label_16d984;
        case 0x16d988u: goto label_16d988;
        case 0x16d98cu: goto label_16d98c;
        case 0x16d990u: goto label_16d990;
        case 0x16d994u: goto label_16d994;
        case 0x16d998u: goto label_16d998;
        case 0x16d99cu: goto label_16d99c;
        case 0x16d9a0u: goto label_16d9a0;
        case 0x16d9a4u: goto label_16d9a4;
        case 0x16d9a8u: goto label_16d9a8;
        case 0x16d9acu: goto label_16d9ac;
        case 0x16d9b0u: goto label_16d9b0;
        case 0x16d9b4u: goto label_16d9b4;
        case 0x16d9b8u: goto label_16d9b8;
        case 0x16d9bcu: goto label_16d9bc;
        case 0x16d9c0u: goto label_16d9c0;
        case 0x16d9c4u: goto label_16d9c4;
        case 0x16d9c8u: goto label_16d9c8;
        case 0x16d9ccu: goto label_16d9cc;
        case 0x16d9d0u: goto label_16d9d0;
        case 0x16d9d4u: goto label_16d9d4;
        case 0x16d9d8u: goto label_16d9d8;
        case 0x16d9dcu: goto label_16d9dc;
        case 0x16d9e0u: goto label_16d9e0;
        case 0x16d9e4u: goto label_16d9e4;
        case 0x16d9e8u: goto label_16d9e8;
        case 0x16d9ecu: goto label_16d9ec;
        case 0x16d9f0u: goto label_16d9f0;
        case 0x16d9f4u: goto label_16d9f4;
        case 0x16d9f8u: goto label_16d9f8;
        case 0x16d9fcu: goto label_16d9fc;
        case 0x16da00u: goto label_16da00;
        case 0x16da04u: goto label_16da04;
        case 0x16da08u: goto label_16da08;
        case 0x16da0cu: goto label_16da0c;
        case 0x16da10u: goto label_16da10;
        case 0x16da14u: goto label_16da14;
        case 0x16da18u: goto label_16da18;
        case 0x16da1cu: goto label_16da1c;
        case 0x16da20u: goto label_16da20;
        case 0x16da24u: goto label_16da24;
        case 0x16da28u: goto label_16da28;
        case 0x16da2cu: goto label_16da2c;
        case 0x16da30u: goto label_16da30;
        case 0x16da34u: goto label_16da34;
        case 0x16da38u: goto label_16da38;
        case 0x16da3cu: goto label_16da3c;
        case 0x16da40u: goto label_16da40;
        case 0x16da44u: goto label_16da44;
        case 0x16da48u: goto label_16da48;
        case 0x16da4cu: goto label_16da4c;
        case 0x16da50u: goto label_16da50;
        case 0x16da54u: goto label_16da54;
        case 0x16da58u: goto label_16da58;
        case 0x16da5cu: goto label_16da5c;
        case 0x16da60u: goto label_16da60;
        case 0x16da64u: goto label_16da64;
        case 0x16da68u: goto label_16da68;
        case 0x16da6cu: goto label_16da6c;
        case 0x16da70u: goto label_16da70;
        case 0x16da74u: goto label_16da74;
        case 0x16da78u: goto label_16da78;
        case 0x16da7cu: goto label_16da7c;
        case 0x16da80u: goto label_16da80;
        case 0x16da84u: goto label_16da84;
        case 0x16da88u: goto label_16da88;
        case 0x16da8cu: goto label_16da8c;
        case 0x16da90u: goto label_16da90;
        case 0x16da94u: goto label_16da94;
        case 0x16da98u: goto label_16da98;
        default: break;
    }

    ctx->pc = 0x16d8e0u;

label_16d8e0:
    // 0x16d8e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16d8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16d8e4:
    // 0x16d8e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16d8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16d8e8:
    // 0x16d8e8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x16d8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16d8ec:
    // 0x16d8ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16d8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16d8f0:
    // 0x16d8f0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x16d8f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_16d8f4:
    // 0x16d8f4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16d8f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_16d8f8:
    // 0x16d8f8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16d8f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_16d8fc:
    // 0x16d8fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16d8fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16d900:
    // 0x16d900: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16d900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16d904:
    // 0x16d904: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16d904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16d908:
    // 0x16d908: 0x320f809  jalr        $t9
label_16d90c:
    if (ctx->pc == 0x16D90Cu) {
        ctx->pc = 0x16D90Cu;
            // 0x16d90c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D910u;
        goto label_16d910;
    }
    ctx->pc = 0x16D908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D910u);
        ctx->pc = 0x16D90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D908u;
            // 0x16d90c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D910u; }
            if (ctx->pc != 0x16D910u) { return; }
        }
        }
    }
    ctx->pc = 0x16D910u;
label_16d910:
    // 0x16d910: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16d910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_16d914:
    // 0x16d914: 0xc041c5c  jal         func_107170
label_16d918:
    if (ctx->pc == 0x16D918u) {
        ctx->pc = 0x16D918u;
            // 0x16d918: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x16D91Cu;
        goto label_16d91c;
    }
    ctx->pc = 0x16D914u;
    SET_GPR_U32(ctx, 31, 0x16D91Cu);
    ctx->pc = 0x16D918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D914u;
            // 0x16d918: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D91Cu; }
        if (ctx->pc != 0x16D91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D91Cu; }
        if (ctx->pc != 0x16D91Cu) { return; }
    }
    ctx->pc = 0x16D91Cu;
label_16d91c:
    // 0x16d91c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x16d91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_16d920:
    // 0x16d920: 0xc04c678  jal         func_1319E0
label_16d924:
    if (ctx->pc == 0x16D924u) {
        ctx->pc = 0x16D924u;
            // 0x16d924: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->pc = 0x16D928u;
        goto label_16d928;
    }
    ctx->pc = 0x16D920u;
    SET_GPR_U32(ctx, 31, 0x16D928u);
    ctx->pc = 0x16D924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D920u;
            // 0x16d924: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D928u; }
        if (ctx->pc != 0x16D928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D928u; }
        if (ctx->pc != 0x16D928u) { return; }
    }
    ctx->pc = 0x16D928u;
label_16d928:
    // 0x16d928: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16d928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16d92c:
    // 0x16d92c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x16d92cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_16d930:
    // 0x16d930: 0xc052cc0  jal         func_14B300
label_16d934:
    if (ctx->pc == 0x16D934u) {
        ctx->pc = 0x16D934u;
            // 0x16d934: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16D938u;
        goto label_16d938;
    }
    ctx->pc = 0x16D930u;
    SET_GPR_U32(ctx, 31, 0x16D938u);
    ctx->pc = 0x16D934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D930u;
            // 0x16d934: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D938u; }
        if (ctx->pc != 0x16D938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D938u; }
        if (ctx->pc != 0x16D938u) { return; }
    }
    ctx->pc = 0x16D938u;
label_16d938:
    // 0x16d938: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16d938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16d93c:
    // 0x16d93c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x16d93cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_16d940:
    // 0x16d940: 0xc052cd0  jal         func_14B340
label_16d944:
    if (ctx->pc == 0x16D944u) {
        ctx->pc = 0x16D944u;
            // 0x16d944: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16D948u;
        goto label_16d948;
    }
    ctx->pc = 0x16D940u;
    SET_GPR_U32(ctx, 31, 0x16D948u);
    ctx->pc = 0x16D944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D940u;
            // 0x16d944: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D948u; }
        if (ctx->pc != 0x16D948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D948u; }
        if (ctx->pc != 0x16D948u) { return; }
    }
    ctx->pc = 0x16D948u;
label_16d948:
    // 0x16d948: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x16d948u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_16d94c:
    // 0x16d94c: 0xc047964  jal         func_11E590
label_16d950:
    if (ctx->pc == 0x16D950u) {
        ctx->pc = 0x16D950u;
            // 0x16d950: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16D954u;
        goto label_16d954;
    }
    ctx->pc = 0x16D94Cu;
    SET_GPR_U32(ctx, 31, 0x16D954u);
    ctx->pc = 0x16D950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D94Cu;
            // 0x16d950: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D954u; }
        if (ctx->pc != 0x16D954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D954u; }
        if (ctx->pc != 0x16D954u) { return; }
    }
    ctx->pc = 0x16D954u;
label_16d954:
    // 0x16d954: 0x4600b502  mul.s       $f20, $f22, $f0
    ctx->pc = 0x16d954u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_16d958:
    // 0x16d958: 0xc047a42  jal         func_11E908
label_16d95c:
    if (ctx->pc == 0x16D95Cu) {
        ctx->pc = 0x16D95Cu;
            // 0x16d95c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16D960u;
        goto label_16d960;
    }
    ctx->pc = 0x16D958u;
    SET_GPR_U32(ctx, 31, 0x16D960u);
    ctx->pc = 0x16D95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D958u;
            // 0x16d95c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D960u; }
        if (ctx->pc != 0x16D960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D960u; }
        if (ctx->pc != 0x16D960u) { return; }
    }
    ctx->pc = 0x16D960u;
label_16d960:
    // 0x16d960: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16d960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_16d964:
    // 0x16d964: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x16d964u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_16d968:
    // 0x16d968: 0xc047a42  jal         func_11E908
label_16d96c:
    if (ctx->pc == 0x16D96Cu) {
        ctx->pc = 0x16D96Cu;
            // 0x16d96c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16D970u;
        goto label_16d970;
    }
    ctx->pc = 0x16D968u;
    SET_GPR_U32(ctx, 31, 0x16D970u);
    ctx->pc = 0x16D96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D968u;
            // 0x16d96c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D970u; }
        if (ctx->pc != 0x16D970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D970u; }
        if (ctx->pc != 0x16D970u) { return; }
    }
    ctx->pc = 0x16D970u;
label_16d970:
    // 0x16d970: 0x4600b047  neg.s       $f1, $f22
    ctx->pc = 0x16d970u;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
label_16d974:
    // 0x16d974: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16d974u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_16d978:
    // 0x16d978: 0xc047964  jal         func_11E590
label_16d97c:
    if (ctx->pc == 0x16D97Cu) {
        ctx->pc = 0x16D97Cu;
            // 0x16d97c: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x16D980u;
        goto label_16d980;
    }
    ctx->pc = 0x16D978u;
    SET_GPR_U32(ctx, 31, 0x16D980u);
    ctx->pc = 0x16D97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D978u;
            // 0x16d97c: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D980u; }
        if (ctx->pc != 0x16D980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D980u; }
        if (ctx->pc != 0x16D980u) { return; }
    }
    ctx->pc = 0x16D980u;
label_16d980:
    // 0x16d980: 0x4600b842  mul.s       $f1, $f23, $f0
    ctx->pc = 0x16d980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_16d984:
    // 0x16d984: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x16d984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_16d988:
    // 0x16d988: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x16d988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16d98c:
    // 0x16d98c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_16d990:
    // 0x16d990: 0xc7808760  lwc1        $f0, -0x78A0($gp)
    ctx->pc = 0x16d990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d994:
    // 0x16d994: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x16d994u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_16d998:
    // 0x16d998: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16d998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16d99c:
    // 0x16d99c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16d99cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16d9a0:
    // 0x16d9a0: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x16d9a0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_16d9a4:
    // 0x16d9a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16d9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16d9a8:
    // 0x16d9a8: 0x0  nop
    ctx->pc = 0x16d9a8u;
    // NOP
label_16d9ac:
    // 0x16d9ac: 0x4602ad42  mul.s       $f21, $f21, $f2
    ctx->pc = 0x16d9acu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_16d9b0:
    // 0x16d9b0: 0x46141802  mul.s       $f0, $f3, $f20
    ctx->pc = 0x16d9b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_16d9b4:
    // 0x16d9b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16d9b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16d9b8:
    // 0x16d9b8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x16d9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_16d9bc:
    // 0x16d9bc: 0x46151802  mul.s       $f0, $f3, $f21
    ctx->pc = 0x16d9bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
label_16d9c0:
    // 0x16d9c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16d9c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16d9c4:
    // 0x16d9c4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x16d9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_16d9c8:
    // 0x16d9c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16d9c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d9cc:
    // 0x16d9cc: 0x0  nop
    ctx->pc = 0x16d9ccu;
    // NOP
label_16d9d0:
    // 0x16d9d0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16d9d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d9d4:
    // 0x16d9d4: 0x0  nop
    ctx->pc = 0x16d9d4u;
    // NOP
label_16d9d8:
    // 0x16d9d8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16d9dc:
    if (ctx->pc == 0x16D9DCu) {
        ctx->pc = 0x16D9E0u;
        goto label_16d9e0;
    }
    ctx->pc = 0x16D9D8u;
    {
        const bool branch_taken_0x16d9d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d9d8) {
            ctx->pc = 0x16D9F0u;
            goto label_16d9f0;
        }
    }
    ctx->pc = 0x16D9E0u;
label_16d9e0:
    // 0x16d9e0: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x16d9e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d9e4:
    // 0x16d9e4: 0x0  nop
    ctx->pc = 0x16d9e4u;
    // NOP
label_16d9e8:
    // 0x16d9e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_16d9ec:
    if (ctx->pc == 0x16D9ECu) {
        ctx->pc = 0x16D9ECu;
            // 0x16d9ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16D9F0u;
        goto label_16d9f0;
    }
    ctx->pc = 0x16D9E8u;
    {
        const bool branch_taken_0x16d9e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D9E8u;
            // 0x16d9ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9e8) {
            ctx->pc = 0x16D9F8u;
            goto label_16d9f8;
        }
    }
    ctx->pc = 0x16D9F0u;
label_16d9f0:
    // 0x16d9f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_16d9f4:
    if (ctx->pc == 0x16D9F4u) {
        ctx->pc = 0x16D9F4u;
            // 0x16d9f4: 0xa200076d  sb          $zero, 0x76D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1901), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x16D9F8u;
        goto label_16d9f8;
    }
    ctx->pc = 0x16D9F0u;
    {
        const bool branch_taken_0x16d9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D9F0u;
            // 0x16d9f4: 0xa200076d  sb          $zero, 0x76D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1901), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9f0) {
            ctx->pc = 0x16D9FCu;
            goto label_16d9fc;
        }
    }
    ctx->pc = 0x16D9F8u;
label_16d9f8:
    // 0x16d9f8: 0xa202076d  sb          $v0, 0x76D($s0)
    ctx->pc = 0x16d9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1901), (uint8_t)GPR_U32(ctx, 2));
label_16d9fc:
    // 0x16d9fc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16d9fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16da00:
    // 0x16da00: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16da00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16da04:
    // 0x16da04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16da04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16da08:
    // 0x16da08: 0x24a53640  addiu       $a1, $a1, 0x3640
    ctx->pc = 0x16da08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13888));
label_16da0c:
    // 0x16da0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16da0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16da10:
    // 0x16da10: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16da10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16da14:
    // 0x16da14: 0x320f809  jalr        $t9
label_16da18:
    if (ctx->pc == 0x16DA18u) {
        ctx->pc = 0x16DA18u;
            // 0x16da18: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16DA1Cu;
        goto label_16da1c;
    }
    ctx->pc = 0x16DA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DA1Cu);
        ctx->pc = 0x16DA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA14u;
            // 0x16da18: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DA1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DA1Cu; }
            if (ctx->pc != 0x16DA1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16DA1Cu;
label_16da1c:
    // 0x16da1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16da1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16da20:
    // 0x16da20: 0x0  nop
    ctx->pc = 0x16da20u;
    // NOP
label_16da24:
    // 0x16da24: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16da24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16da28:
    // 0x16da28: 0x0  nop
    ctx->pc = 0x16da28u;
    // NOP
label_16da2c:
    // 0x16da2c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16da30:
    if (ctx->pc == 0x16DA30u) {
        ctx->pc = 0x16DA34u;
        goto label_16da34;
    }
    ctx->pc = 0x16DA2Cu;
    {
        const bool branch_taken_0x16da2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16da2c) {
            ctx->pc = 0x16DA44u;
            goto label_16da44;
        }
    }
    ctx->pc = 0x16DA34u;
label_16da34:
    // 0x16da34: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x16da34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16da38:
    // 0x16da38: 0x0  nop
    ctx->pc = 0x16da38u;
    // NOP
label_16da3c:
    // 0x16da3c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_16da40:
    if (ctx->pc == 0x16DA40u) {
        ctx->pc = 0x16DA40u;
            // 0x16da40: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x16DA44u;
        goto label_16da44;
    }
    ctx->pc = 0x16DA3Cu;
    {
        const bool branch_taken_0x16da3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA3Cu;
            // 0x16da40: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da3c) {
            ctx->pc = 0x16DA68u;
            goto label_16da68;
        }
    }
    ctx->pc = 0x16DA44u;
label_16da44:
    // 0x16da44: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16da44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16da48:
    // 0x16da48: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16da48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16da4c:
    // 0x16da4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16da4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16da50:
    // 0x16da50: 0x24a53650  addiu       $a1, $a1, 0x3650
    ctx->pc = 0x16da50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13904));
label_16da54:
    // 0x16da54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16da54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16da58:
    // 0x16da58: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16da58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16da5c:
    // 0x16da5c: 0x320f809  jalr        $t9
label_16da60:
    if (ctx->pc == 0x16DA60u) {
        ctx->pc = 0x16DA60u;
            // 0x16da60: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16DA64u;
        goto label_16da64;
    }
    ctx->pc = 0x16DA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DA64u);
        ctx->pc = 0x16DA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA5Cu;
            // 0x16da60: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DA64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DA64u; }
            if (ctx->pc != 0x16DA64u) { return; }
        }
        }
    }
    ctx->pc = 0x16DA64u;
label_16da64:
    // 0x16da64: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x16da64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_16da68:
    // 0x16da68: 0xc041c5c  jal         func_107170
label_16da6c:
    if (ctx->pc == 0x16DA6Cu) {
        ctx->pc = 0x16DA6Cu;
            // 0x16da6c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x16DA70u;
        goto label_16da70;
    }
    ctx->pc = 0x16DA68u;
    SET_GPR_U32(ctx, 31, 0x16DA70u);
    ctx->pc = 0x16DA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA68u;
            // 0x16da6c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA70u; }
        if (ctx->pc != 0x16DA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA70u; }
        if (ctx->pc != 0x16DA70u) { return; }
    }
    ctx->pc = 0x16DA70u;
label_16da70:
    // 0x16da70: 0xc05b1e8  jal         func_16C7A0
label_16da74:
    if (ctx->pc == 0x16DA74u) {
        ctx->pc = 0x16DA74u;
            // 0x16da74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16DA78u;
        goto label_16da78;
    }
    ctx->pc = 0x16DA70u;
    SET_GPR_U32(ctx, 31, 0x16DA78u);
    ctx->pc = 0x16DA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA70u;
            // 0x16da74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C7A0u;
    if (runtime->hasFunction(0x16C7A0u)) {
        auto targetFn = runtime->lookupFunction(0x16C7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA78u; }
        if (ctx->pc != 0x16DA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RockOn__12CActionCharaFv_0x16c7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA78u; }
        if (ctx->pc != 0x16DA78u) { return; }
    }
    ctx->pc = 0x16DA78u;
label_16da78:
    // 0x16da78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16da78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16da7c:
    // 0x16da7c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x16da7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_16da80:
    // 0x16da80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16da80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16da84:
    // 0x16da84: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16da84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_16da88:
    // 0x16da88: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16da88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16da8c:
    // 0x16da8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16da90:
    // 0x16da90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16da90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16da94:
    // 0x16da94: 0x3e00008  jr          $ra
label_16da98:
    if (ctx->pc == 0x16DA98u) {
        ctx->pc = 0x16DA98u;
            // 0x16da98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16DA9Cu;
        goto label_fallthrough_0x16da94;
    }
    ctx->pc = 0x16DA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA94u;
            // 0x16da98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16da94:
    ctx->pc = 0x16DA9Cu;
}
