#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DngTreeMapKey__Fv
// Address: 0x1f2340 - 0x1f2454
void DngTreeMapKey__Fv_0x1f2340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DngTreeMapKey__Fv_0x1f2340");
#endif

    switch (ctx->pc) {
        case 0x1f2360u: goto label_1f2360;
        case 0x1f237cu: goto label_1f237c;
        case 0x1f2388u: goto label_1f2388;
        case 0x1f2398u: goto label_1f2398;
        case 0x1f23c4u: goto label_1f23c4;
        case 0x1f23d8u: goto label_1f23d8;
        case 0x1f23f4u: goto label_1f23f4;
        case 0x1f2408u: goto label_1f2408;
        case 0x1f2420u: goto label_1f2420;
        case 0x1f2440u: goto label_1f2440;
        default: break;
    }

    ctx->pc = 0x1f2340u;

    // 0x1f2340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f2340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f2344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f2344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f2348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f2348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f234c: 0x87838f04  lh          $v1, -0x70FC($gp)
    ctx->pc = 0x1f234cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938372)));
    // 0x1f2350: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F2350u;
    {
        const bool branch_taken_0x1f2350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2350u;
            // 0x1f2354: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2350) {
            ctx->pc = 0x1F23E0u;
            goto label_1f23e0;
        }
    }
    ctx->pc = 0x1F2358u;
    // 0x1f2358: 0xc07bfd0  jal         func_1EFF40
    ctx->pc = 0x1F2358u;
    SET_GPR_U32(ctx, 31, 0x1F2360u);
    ctx->pc = 0x1F235Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2358u;
            // 0x1f235c: 0x8f848f28  lw          $a0, -0x70D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFF40u;
    if (runtime->hasFunction(0x1EFF40u)) {
        auto targetFn = runtime->lookupFunction(0x1EFF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2360u; }
        if (ctx->pc != 0x1F2360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__12CMenuTreeMapFv_0x1eff40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2360u; }
        if (ctx->pc != 0x1F2360u) { return; }
    }
    ctx->pc = 0x1F2360u;
label_1f2360:
    // 0x1f2360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f2360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2364: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f2364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2368: 0x87828f04  lh          $v0, -0x70FC($gp)
    ctx->pc = 0x1f2368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938372)));
    // 0x1f236c: 0x14440035  bne         $v0, $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1F236Cu;
    {
        const bool branch_taken_0x1f236c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F2370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F236Cu;
            // 0x1f2370: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f236c) {
            ctx->pc = 0x1F2444u;
            goto label_1f2444;
        }
    }
    ctx->pc = 0x1F2374u;
    // 0x1f2374: 0xc0bc508  jal         func_2F1420
    ctx->pc = 0x1F2374u;
    SET_GPR_U32(ctx, 31, 0x1F237Cu);
    ctx->pc = 0x2F1420u;
    if (runtime->hasFunction(0x2F1420u)) {
        auto targetFn = runtime->lookupFunction(0x2F1420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F237Cu; }
        if (ctx->pc != 0x1F237Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDngTreeFlag__Fi_0x2f1420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F237Cu; }
        if (ctx->pc != 0x1F237Cu) { return; }
    }
    ctx->pc = 0x1F237Cu;
label_1f237c:
    // 0x1f237c: 0x8f828eb0  lw          $v0, -0x7150($gp)
    ctx->pc = 0x1f237cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1f2380: 0xc0b1430  jal         func_2C50C0
    ctx->pc = 0x1F2380u;
    SET_GPR_U32(ctx, 31, 0x1F2388u);
    ctx->pc = 0x1F2384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2380u;
            // 0x1f2384: 0x8444000a  lh          $a0, 0xA($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C50C0u;
    if (runtime->hasFunction(0x2C50C0u)) {
        auto targetFn = runtime->lookupFunction(0x2C50C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2388u; }
        if (ctx->pc != 0x1F2388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaveMapInfo__Fi_0x2c50c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2388u; }
        if (ctx->pc != 0x1F2388u) { return; }
    }
    ctx->pc = 0x1F2388u;
label_1f2388:
    // 0x1f2388: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f2388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f238c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f238cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f2390: 0xc04e640  jal         func_139900
    ctx->pc = 0x1F2390u;
    SET_GPR_U32(ctx, 31, 0x1F2398u);
    ctx->pc = 0x1F2394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2390u;
            // 0x1f2394: 0xa78285d4  sh          $v0, -0x7A2C($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936020), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2398u; }
        if (ctx->pc != 0x1F2398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2398u; }
        if (ctx->pc != 0x1F2398u) { return; }
    }
    ctx->pc = 0x1F2398u;
label_1f2398:
    // 0x1f2398: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f2398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f239c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f239cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f23a0: 0x8c238e28  lw          $v1, -0x71D8($at)
    ctx->pc = 0x1f23a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938152)));
    // 0x1f23a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f23a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f23a8: 0x8c258e24  lw          $a1, -0x71DC($at)
    ctx->pc = 0x1f23a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938148)));
    // 0x1f23ac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f23acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f23b0: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x1f23b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f23b4: 0x8c228e20  lw          $v0, -0x71E0($at)
    ctx->pc = 0x1f23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938144)));
    // 0x1f23b8: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1f23b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1f23bc: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1F23BCu;
    SET_GPR_U32(ctx, 31, 0x1F23C4u);
    ctx->pc = 0x1F23C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F23BCu;
            // 0x1f23c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F23C4u; }
        if (ctx->pc != 0x1F23C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F23C4u; }
        if (ctx->pc != 0x1F23C4u) { return; }
    }
    ctx->pc = 0x1F23C4u;
label_1f23c4:
    // 0x1f23c4: 0x8f828f28  lw          $v0, -0x70D8($gp)
    ctx->pc = 0x1f23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
    // 0x1f23c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f23c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f23cc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1f23ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f23d0: 0xc0b1474  jal         func_2C51D0
    ctx->pc = 0x1F23D0u;
    SET_GPR_U32(ctx, 31, 0x1F23D8u);
    ctx->pc = 0x1F23D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F23D0u;
            // 0x1f23d4: 0x24450024  addiu       $a1, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C51D0u;
    if (runtime->hasFunction(0x2C51D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C51D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F23D8u; }
        if (ctx->pc != 0x1F23D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSaveInit__FP9mgCMemoryPii_0x2c51d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F23D8u; }
        if (ctx->pc != 0x1F23D8u) { return; }
    }
    ctx->pc = 0x1F23D8u;
label_1f23d8:
    // 0x1f23d8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1F23D8u;
    {
        const bool branch_taken_0x1f23d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f23d8) {
            ctx->pc = 0x1F2440u;
            goto label_1f2440;
        }
    }
    ctx->pc = 0x1F23E0u;
label_1f23e0:
    // 0x1f23e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f23e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f23e4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F23E4u;
    {
        const bool branch_taken_0x1f23e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f23e4) {
            ctx->pc = 0x1F2440u;
            goto label_1f2440;
        }
    }
    ctx->pc = 0x1F23ECu;
    // 0x1f23ec: 0xc0b1618  jal         func_2C5860
    ctx->pc = 0x1F23ECu;
    SET_GPR_U32(ctx, 31, 0x1F23F4u);
    ctx->pc = 0x2C5860u;
    if (runtime->hasFunction(0x2C5860u)) {
        auto targetFn = runtime->lookupFunction(0x2C5860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F23F4u; }
        if (ctx->pc != 0x1F23F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSaveKey__Fv_0x2c5860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F23F4u; }
        if (ctx->pc != 0x1F23F4u) { return; }
    }
    ctx->pc = 0x1F23F4u;
label_1f23f4:
    // 0x1f23f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f23f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23f8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F23F8u;
    {
        const bool branch_taken_0x1f23f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F23FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F23F8u;
            // 0x1f23fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f23f8) {
            ctx->pc = 0x1F2440u;
            goto label_1f2440;
        }
    }
    ctx->pc = 0x1F2400u;
    // 0x1f2400: 0xc0bc508  jal         func_2F1420
    ctx->pc = 0x1F2400u;
    SET_GPR_U32(ctx, 31, 0x1F2408u);
    ctx->pc = 0x2F1420u;
    if (runtime->hasFunction(0x2F1420u)) {
        auto targetFn = runtime->lookupFunction(0x2F1420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2408u; }
        if (ctx->pc != 0x1F2408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDngTreeFlag__Fi_0x2f1420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2408u; }
        if (ctx->pc != 0x1F2408u) { return; }
    }
    ctx->pc = 0x1F2408u;
label_1f2408:
    // 0x1f2408: 0x8f848f28  lw          $a0, -0x70D8($gp)
    ctx->pc = 0x1f2408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
    // 0x1f240c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f240cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f2410: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1f2410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1f2414: 0xa7808f04  sh          $zero, -0x70FC($gp)
    ctx->pc = 0x1f2414u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938372), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f2418: 0xc08e88c  jal         func_23A230
    ctx->pc = 0x1F2418u;
    SET_GPR_U32(ctx, 31, 0x1F2420u);
    ctx->pc = 0x1F241Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2418u;
            // 0x1f241c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2420u; }
        if (ctx->pc != 0x1F2420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2420u; }
        if (ctx->pc != 0x1F2420u) { return; }
    }
    ctx->pc = 0x1F2420u;
label_1f2420:
    // 0x1f2420: 0x8f828f28  lw          $v0, -0x70D8($gp)
    ctx->pc = 0x1f2420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
    // 0x1f2424: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1f2424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f2428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f242c: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x1f242cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f2430: 0x8f828f28  lw          $v0, -0x70D8($gp)
    ctx->pc = 0x1f2430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
    // 0x1f2434: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x1f2434u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2438: 0xc07bf5c  jal         func_1EFD70
    ctx->pc = 0x1F2438u;
    SET_GPR_U32(ctx, 31, 0x1F2440u);
    ctx->pc = 0x1F243Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2438u;
            // 0x1f243c: 0x8f848f28  lw          $a0, -0x70D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD70u;
    if (runtime->hasFunction(0x1EFD70u)) {
        auto targetFn = runtime->lookupFunction(0x1EFD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2440u; }
        if (ctx->pc != 0x1F2440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgInit__12CMenuTreeMapFv_0x1efd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2440u; }
        if (ctx->pc != 0x1F2440u) { return; }
    }
    ctx->pc = 0x1F2440u;
label_1f2440:
    // 0x1f2440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f2440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2444:
    // 0x1f2444: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f2444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f2448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f244c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F244Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F244Cu;
            // 0x1f2450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2454u;
}
