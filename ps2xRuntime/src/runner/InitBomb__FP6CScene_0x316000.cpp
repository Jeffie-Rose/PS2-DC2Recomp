#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitBomb__FP6CScene
// Address: 0x316000 - 0x3160d4
void InitBomb__FP6CScene_0x316000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitBomb__FP6CScene_0x316000");
#endif

    switch (ctx->pc) {
        case 0x316000u: goto label_316000;
        case 0x316004u: goto label_316004;
        case 0x316008u: goto label_316008;
        case 0x31600cu: goto label_31600c;
        case 0x316010u: goto label_316010;
        case 0x316014u: goto label_316014;
        case 0x316018u: goto label_316018;
        case 0x31601cu: goto label_31601c;
        case 0x316020u: goto label_316020;
        case 0x316024u: goto label_316024;
        case 0x316028u: goto label_316028;
        case 0x31602cu: goto label_31602c;
        case 0x316030u: goto label_316030;
        case 0x316034u: goto label_316034;
        case 0x316038u: goto label_316038;
        case 0x31603cu: goto label_31603c;
        case 0x316040u: goto label_316040;
        case 0x316044u: goto label_316044;
        case 0x316048u: goto label_316048;
        case 0x31604cu: goto label_31604c;
        case 0x316050u: goto label_316050;
        case 0x316054u: goto label_316054;
        case 0x316058u: goto label_316058;
        case 0x31605cu: goto label_31605c;
        case 0x316060u: goto label_316060;
        case 0x316064u: goto label_316064;
        case 0x316068u: goto label_316068;
        case 0x31606cu: goto label_31606c;
        case 0x316070u: goto label_316070;
        case 0x316074u: goto label_316074;
        case 0x316078u: goto label_316078;
        case 0x31607cu: goto label_31607c;
        case 0x316080u: goto label_316080;
        case 0x316084u: goto label_316084;
        case 0x316088u: goto label_316088;
        case 0x31608cu: goto label_31608c;
        case 0x316090u: goto label_316090;
        case 0x316094u: goto label_316094;
        case 0x316098u: goto label_316098;
        case 0x31609cu: goto label_31609c;
        case 0x3160a0u: goto label_3160a0;
        case 0x3160a4u: goto label_3160a4;
        case 0x3160a8u: goto label_3160a8;
        case 0x3160acu: goto label_3160ac;
        case 0x3160b0u: goto label_3160b0;
        case 0x3160b4u: goto label_3160b4;
        case 0x3160b8u: goto label_3160b8;
        case 0x3160bcu: goto label_3160bc;
        case 0x3160c0u: goto label_3160c0;
        case 0x3160c4u: goto label_3160c4;
        case 0x3160c8u: goto label_3160c8;
        case 0x3160ccu: goto label_3160cc;
        case 0x3160d0u: goto label_3160d0;
        default: break;
    }

    ctx->pc = 0x316000u;

label_316000:
    // 0x316000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_316004:
    // 0x316004: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x316004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_316008:
    // 0x316008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x316008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31600c:
    // 0x31600c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31600cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_316010:
    // 0x316010: 0xaf82a308  sw          $v0, -0x5CF8($gp)
    ctx->pc = 0x316010u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943496), GPR_U32(ctx, 2));
label_316014:
    // 0x316014: 0xc0a11b4  jal         func_2846D0
label_316018:
    if (ctx->pc == 0x316018u) {
        ctx->pc = 0x316018u;
            // 0x316018: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->pc = 0x31601Cu;
        goto label_31601c;
    }
    ctx->pc = 0x316014u;
    SET_GPR_U32(ctx, 31, 0x31601Cu);
    ctx->pc = 0x316018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316014u;
            // 0x316018: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31601Cu; }
        if (ctx->pc != 0x31601Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31601Cu; }
        if (ctx->pc != 0x31601Cu) { return; }
    }
    ctx->pc = 0x31601Cu;
label_31601c:
    // 0x31601c: 0x3c03bf4c  lui         $v1, 0xBF4C
    ctx->pc = 0x31601cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48972 << 16));
label_316020:
    // 0x316020: 0x3c024308  lui         $v0, 0x4308
    ctx->pc = 0x316020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17160 << 16));
label_316024:
    // 0x316024: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x316024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_316028:
    // 0x316028: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x316028u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31602c:
    // 0x31602c: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x31602cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_316030:
    // 0x316030: 0x3c02c3a0  lui         $v0, 0xC3A0
    ctx->pc = 0x316030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50080 << 16));
label_316034:
    // 0x316034: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x316034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_316038:
    // 0x316038: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x316038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_31603c:
    // 0x31603c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x31603cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_316040:
    // 0x316040: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x316040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316044:
    // 0x316044: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x316044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_316048:
    // 0x316048: 0x320f809  jalr        $t9
label_31604c:
    if (ctx->pc == 0x31604Cu) {
        ctx->pc = 0x316050u;
        goto label_316050;
    }
    ctx->pc = 0x316048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316050u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x316050u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316050u; }
            if (ctx->pc != 0x316050u) { return; }
        }
        }
    }
    ctx->pc = 0x316050u;
label_316050:
    // 0x316050: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x316050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_316054:
    // 0x316054: 0x8f84a294  lw          $a0, -0x5D6C($gp)
    ctx->pc = 0x316054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
label_316058:
    // 0x316058: 0xac20f940  sw          $zero, -0x6C0($at)
    ctx->pc = 0x316058u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965568), GPR_U32(ctx, 0));
label_31605c:
    // 0x31605c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x31605cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_316060:
    // 0x316060: 0x3c0242e2  lui         $v0, 0x42E2
    ctx->pc = 0x316060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17122 << 16));
label_316064:
    // 0x316064: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x316064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_316068:
    // 0x316068: 0xac22f944  sw          $v0, -0x6BC($at)
    ctx->pc = 0x316068u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965572), GPR_U32(ctx, 2));
label_31606c:
    // 0x31606c: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x31606cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
label_316070:
    // 0x316070: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x316070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_316074:
    // 0x316074: 0xac22f948  sw          $v0, -0x6B8($at)
    ctx->pc = 0x316074u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965576), GPR_U32(ctx, 2));
label_316078:
    // 0x316078: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x316078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31607c:
    // 0x31607c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x31607cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_316080:
    // 0x316080: 0x320f809  jalr        $t9
label_316084:
    if (ctx->pc == 0x316084u) {
        ctx->pc = 0x316084u;
            // 0x316084: 0x24a5f940  addiu       $a1, $a1, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965568));
        ctx->pc = 0x316088u;
        goto label_316088;
    }
    ctx->pc = 0x316080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316088u);
        ctx->pc = 0x316084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316080u;
            // 0x316084: 0x24a5f940  addiu       $a1, $a1, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965568));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316088u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316088u; }
            if (ctx->pc != 0x316088u) { return; }
        }
        }
    }
    ctx->pc = 0x316088u;
label_316088:
    // 0x316088: 0x8f84a294  lw          $a0, -0x5D6C($gp)
    ctx->pc = 0x316088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
label_31608c:
    // 0x31608c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x31608cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_316090:
    // 0x316090: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x316090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_316094:
    // 0x316094: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x316094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_316098:
    // 0x316098: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x316098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_31609c:
    // 0x31609c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31609cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3160a0:
    // 0x3160a0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x3160a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_3160a4:
    // 0x3160a4: 0x320f809  jalr        $t9
label_3160a8:
    if (ctx->pc == 0x3160A8u) {
        ctx->pc = 0x3160A8u;
            // 0x3160a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3160ACu;
        goto label_3160ac;
    }
    ctx->pc = 0x3160A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3160ACu);
        ctx->pc = 0x3160A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3160A4u;
            // 0x3160a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3160ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3160ACu; }
            if (ctx->pc != 0x3160ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3160ACu;
label_3160ac:
    // 0x3160ac: 0x8f84a294  lw          $a0, -0x5D6C($gp)
    ctx->pc = 0x3160acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
label_3160b0:
    // 0x3160b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3160b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3160b4:
    // 0x3160b4: 0x24a528c0  addiu       $a1, $a1, 0x28C0
    ctx->pc = 0x3160b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
label_3160b8:
    // 0x3160b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3160b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3160bc:
    // 0x3160bc: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x3160bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_3160c0:
    // 0x3160c0: 0x320f809  jalr        $t9
label_3160c4:
    if (ctx->pc == 0x3160C4u) {
        ctx->pc = 0x3160C4u;
            // 0x3160c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3160C8u;
        goto label_3160c8;
    }
    ctx->pc = 0x3160C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3160C8u);
        ctx->pc = 0x3160C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3160C0u;
            // 0x3160c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3160C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3160C8u; }
            if (ctx->pc != 0x3160C8u) { return; }
        }
        }
    }
    ctx->pc = 0x3160C8u;
label_3160c8:
    // 0x3160c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3160c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3160cc:
    // 0x3160cc: 0x3e00008  jr          $ra
label_3160d0:
    if (ctx->pc == 0x3160D0u) {
        ctx->pc = 0x3160D0u;
            // 0x3160d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3160D4u;
        goto label_fallthrough_0x3160cc;
    }
    ctx->pc = 0x3160CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3160D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3160CCu;
            // 0x3160d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3160cc:
    ctx->pc = 0x3160D4u;
}
