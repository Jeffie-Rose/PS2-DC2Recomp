#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UseNPCPoint__16CBattleCharaInfoFi
// Address: 0x19f260 - 0x19f374
void UseNPCPoint__16CBattleCharaInfoFi_0x19f260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UseNPCPoint__16CBattleCharaInfoFi_0x19f260");
#endif

    switch (ctx->pc) {
        case 0x19f28cu: goto label_19f28c;
        case 0x19f298u: goto label_19f298;
        case 0x19f2b0u: goto label_19f2b0;
        case 0x19f2d8u: goto label_19f2d8;
        case 0x19f2f8u: goto label_19f2f8;
        case 0x19f324u: goto label_19f324;
        case 0x19f338u: goto label_19f338;
        case 0x19f354u: goto label_19f354;
        default: break;
    }

    ctx->pc = 0x19f260u;

    // 0x19f260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19f264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f26c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f270: 0x84900004  lh          $s0, 0x4($a0)
    ctx->pc = 0x19f270u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19f274: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F274u;
    {
        const bool branch_taken_0x19f274 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x19F278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F274u;
            // 0x19f278: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f274) {
            ctx->pc = 0x19F284u;
            goto label_19f284;
        }
    }
    ctx->pc = 0x19F27Cu;
    // 0x19f27c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x19F27Cu;
    {
        const bool branch_taken_0x19f27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F27Cu;
            // 0x19f280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f27c) {
            ctx->pc = 0x19F360u;
            goto label_19f360;
        }
    }
    ctx->pc = 0x19F284u;
label_19f284:
    // 0x19f284: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x19F284u;
    SET_GPR_U32(ctx, 31, 0x19F28Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F28Cu; }
        if (ctx->pc != 0x19F28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F28Cu; }
        if (ctx->pc != 0x19F28Cu) { return; }
    }
    ctx->pc = 0x19F28Cu;
label_19f28c:
    // 0x19f28c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19f28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f290: 0xc067278  jal         func_19C9E0
    ctx->pc = 0x19F290u;
    SET_GPR_U32(ctx, 31, 0x19F298u);
    ctx->pc = 0x19F294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F290u;
            // 0x19f294: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C9E0u;
    if (runtime->hasFunction(0x19C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x19C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F298u; }
        if (ctx->pc != 0x19F298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaInfo__16CUserDataManagerFi_0x19c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F298u; }
        if (ctx->pc != 0x19F298u) { return; }
    }
    ctx->pc = 0x19F298u;
label_19f298:
    // 0x19f298: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F298u;
    {
        const bool branch_taken_0x19f298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F298u;
            // 0x19f29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f298) {
            ctx->pc = 0x19F2A8u;
            goto label_19f2a8;
        }
    }
    ctx->pc = 0x19F2A0u;
    // 0x19f2a0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x19F2A0u;
    {
        const bool branch_taken_0x19f2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2A0u;
            // 0x19f2a4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2a0) {
            ctx->pc = 0x19F364u;
            goto label_19f364;
        }
    }
    ctx->pc = 0x19F2A8u;
label_19f2a8:
    // 0x19f2a8: 0xc0aad44  jal         func_2AB510
    ctx->pc = 0x19F2A8u;
    SET_GPR_U32(ctx, 31, 0x19F2B0u);
    ctx->pc = 0x19F2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2A8u;
            // 0x19f2ac: 0x86240004  lh          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB510u;
    if (runtime->hasFunction(0x2AB510u)) {
        auto targetFn = runtime->lookupFunction(0x2AB510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2B0u; }
        if (ctx->pc != 0x19F2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyNPCData__Fi_0x2ab510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2B0u; }
        if (ctx->pc != 0x19F2B0u) { return; }
    }
    ctx->pc = 0x19F2B0u;
label_19f2b0:
    // 0x19f2b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F2B0u;
    {
        const bool branch_taken_0x19f2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2B0u;
            // 0x19f2b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2b0) {
            ctx->pc = 0x19F2C0u;
            goto label_19f2c0;
        }
    }
    ctx->pc = 0x19F2B8u;
    // 0x19f2b8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x19F2B8u;
    {
        const bool branch_taken_0x19f2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f2b8) {
            ctx->pc = 0x19F360u;
            goto label_19f360;
        }
    }
    ctx->pc = 0x19F2C0u;
label_19f2c0:
    // 0x19f2c0: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x19f2c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19f2c4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x19f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19f2c8: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x19F2C8u;
    {
        const bool branch_taken_0x19f2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2C8u;
            // 0x19f2cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2c8) {
            ctx->pc = 0x19F360u;
            goto label_19f360;
        }
    }
    ctx->pc = 0x19F2D0u;
    // 0x19f2d0: 0xc06421c  jal         func_190870
    ctx->pc = 0x19F2D0u;
    SET_GPR_U32(ctx, 31, 0x19F2D8u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2D8u; }
        if (ctx->pc != 0x19F2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2D8u; }
        if (ctx->pc != 0x19F2D8u) { return; }
    }
    ctx->pc = 0x19F2D8u;
label_19f2d8:
    // 0x19f2d8: 0x94422f9c  lhu         $v0, 0x2F9C($v0)
    ctx->pc = 0x19f2d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12188)));
    // 0x19f2dc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19f2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19f2e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F2E0u;
    {
        const bool branch_taken_0x19f2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2E0u;
            // 0x19f2e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2e0) {
            ctx->pc = 0x19F2F0u;
            goto label_19f2f0;
        }
    }
    ctx->pc = 0x19F2E8u;
    // 0x19f2e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19F2E8u;
    {
        const bool branch_taken_0x19f2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f2e8) {
            ctx->pc = 0x19F360u;
            goto label_19f360;
        }
    }
    ctx->pc = 0x19F2F0u;
label_19f2f0:
    // 0x19f2f0: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x19F2F0u;
    SET_GPR_U32(ctx, 31, 0x19F2F8u);
    ctx->pc = 0x19F2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2F0u;
            // 0x19f2f4: 0x8e240074  lw          $a0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2F8u; }
        if (ctx->pc != 0x19F2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2F8u; }
        if (ctx->pc != 0x19F2F8u) { return; }
    }
    ctx->pc = 0x19F2F8u;
label_19f2f8:
    // 0x19f2f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19f2fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19f2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19f300: 0x0  nop
    ctx->pc = 0x19f300u;
    // NOP
    // 0x19f304: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19f304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f308: 0x0  nop
    ctx->pc = 0x19f308u;
    // NOP
    // 0x19f30c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x19F30Cu;
    {
        const bool branch_taken_0x19f30c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F30Cu;
            // 0x19f310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f30c) {
            ctx->pc = 0x19F31Cu;
            goto label_19f31c;
        }
    }
    ctx->pc = 0x19F314u;
    // 0x19f314: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19F314u;
    {
        const bool branch_taken_0x19f314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f314) {
            ctx->pc = 0x19F360u;
            goto label_19f360;
        }
    }
    ctx->pc = 0x19F31Cu;
label_19f31c:
    // 0x19f31c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x19F31Cu;
    SET_GPR_U32(ctx, 31, 0x19F324u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F324u; }
        if (ctx->pc != 0x19F324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F324u; }
        if (ctx->pc != 0x19F324u) { return; }
    }
    ctx->pc = 0x19F324u;
label_19f324:
    // 0x19f324: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f328: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x19f328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19f32c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x19f32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19f330: 0xc067288  jal         func_19CA20
    ctx->pc = 0x19F330u;
    SET_GPR_U32(ctx, 31, 0x19F338u);
    ctx->pc = 0x19F334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F330u;
            // 0x19f334: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CA20u;
    if (runtime->hasFunction(0x19CA20u)) {
        auto targetFn = runtime->lookupFunction(0x19CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F338u; }
        if (ctx->pc != 0x19F338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseNpcAbility__16CUserDataManagerFiii_0x19ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F338u; }
        if (ctx->pc != 0x19F338u) { return; }
    }
    ctx->pc = 0x19F338u;
label_19f338:
    // 0x19f338: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19F338u;
    {
        const bool branch_taken_0x19f338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f338) {
            ctx->pc = 0x19F35Cu;
            goto label_19f35c;
        }
    }
    ctx->pc = 0x19F340u;
    // 0x19f340: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x19f340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x19f344: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19f344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x19f348: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19f34c: 0xc065b58  jal         func_196D60
    ctx->pc = 0x19F34Cu;
    SET_GPR_U32(ctx, 31, 0x19F354u);
    ctx->pc = 0x19F350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F34Cu;
            // 0x19f350: 0x8e240074  lw          $a0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D60u;
    if (runtime->hasFunction(0x196D60u)) {
        auto targetFn = runtime->lookupFunction(0x196D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F354u; }
        if (ctx->pc != 0x19F354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddRate__11COMMON_GAGEFf_0x196d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F354u; }
        if (ctx->pc != 0x19F354u) { return; }
    }
    ctx->pc = 0x19F354u;
label_19f354:
    // 0x19f354: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F354u;
    {
        const bool branch_taken_0x19f354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F354u;
            // 0x19f358: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f354) {
            ctx->pc = 0x19F360u;
            goto label_19f360;
        }
    }
    ctx->pc = 0x19F35Cu;
label_19f35c:
    // 0x19f35c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19f35cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f360:
    // 0x19f360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f364:
    // 0x19f364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f36c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F36Cu;
            // 0x19f370: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F374u;
}
