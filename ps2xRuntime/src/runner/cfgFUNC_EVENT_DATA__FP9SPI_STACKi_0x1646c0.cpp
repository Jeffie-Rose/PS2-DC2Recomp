#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cfgFUNC_EVENT_DATA__FP9SPI_STACKi
// Address: 0x1646c0 - 0x16480c
void cfgFUNC_EVENT_DATA__FP9SPI_STACKi_0x1646c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cfgFUNC_EVENT_DATA__FP9SPI_STACKi_0x1646c0");
#endif

    switch (ctx->pc) {
        case 0x1646ecu: goto label_1646ec;
        case 0x164704u: goto label_164704;
        case 0x164724u: goto label_164724;
        case 0x164748u: goto label_164748;
        case 0x16476cu: goto label_16476c;
        case 0x16479cu: goto label_16479c;
        case 0x1647ccu: goto label_1647cc;
        default: break;
    }

    ctx->pc = 0x1646c0u;

    // 0x1646c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1646c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1646c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1646c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1646c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1646c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1646cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1646ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1646d0: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x1646d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1646d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1646D4u;
    {
        const bool branch_taken_0x1646d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1646D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1646D4u;
            // 0x1646d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646d4) {
            ctx->pc = 0x1646E4u;
            goto label_1646e4;
        }
    }
    ctx->pc = 0x1646DCu;
    // 0x1646dc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1646DCu;
    {
        const bool branch_taken_0x1646dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1646DCu;
            // 0x1646e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646dc) {
            ctx->pc = 0x1647F8u;
            goto label_1647f8;
        }
    }
    ctx->pc = 0x1646E4u;
label_1646e4:
    // 0x1646e4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1646E4u;
    SET_GPR_U32(ctx, 31, 0x1646ECu);
    ctx->pc = 0x1646E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1646E4u;
            // 0x1646e8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646ECu; }
        if (ctx->pc != 0x1646ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646ECu; }
        if (ctx->pc != 0x1646ECu) { return; }
    }
    ctx->pc = 0x1646ECu;
label_1646ec:
    // 0x1646ec: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x1646ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1646f0: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x1646f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1646f4: 0x1420003f  bnez        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x1646F4u;
    {
        const bool branch_taken_0x1646f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1646F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1646F4u;
            // 0x1646f8: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646f4) {
            ctx->pc = 0x1647F4u;
            goto label_1647f4;
        }
    }
    ctx->pc = 0x1646FCu;
    // 0x1646fc: 0xc05191c  jal         func_146470
    ctx->pc = 0x1646FCu;
    SET_GPR_U32(ctx, 31, 0x164704u);
    ctx->pc = 0x164700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1646FCu;
            // 0x164700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164704u; }
        if (ctx->pc != 0x164704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164704u; }
        if (ctx->pc != 0x164704u) { return; }
    }
    ctx->pc = 0x164704u;
label_164704:
    // 0x164704: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164708: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x164708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x16470c: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x16470Cu;
    {
        const bool branch_taken_0x16470c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x164710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16470Cu;
            // 0x164710: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16470c) {
            ctx->pc = 0x1647F4u;
            goto label_1647f4;
        }
    }
    ctx->pc = 0x164714u;
    // 0x164714: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x164714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x164718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16471c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x16471Cu;
    SET_GPR_U32(ctx, 31, 0x164724u);
    ctx->pc = 0x164720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16471Cu;
            // 0x164720: 0x24a53218  addiu       $a1, $a1, 0x3218 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164724u; }
        if (ctx->pc != 0x164724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164724u; }
        if (ctx->pc != 0x164724u) { return; }
    }
    ctx->pc = 0x164724u;
label_164724:
    // 0x164724: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164724u;
    {
        const bool branch_taken_0x164724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164724u;
            // 0x164728: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164724) {
            ctx->pc = 0x16473Cu;
            goto label_16473c;
        }
    }
    ctx->pc = 0x16472Cu;
    // 0x16472c: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x16472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x164730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164734: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x164734u;
    {
        const bool branch_taken_0x164734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164734u;
            // 0x164738: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164734) {
            ctx->pc = 0x1647F4u;
            goto label_1647f4;
        }
    }
    ctx->pc = 0x16473Cu;
label_16473c:
    // 0x16473c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16473cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164740: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x164740u;
    SET_GPR_U32(ctx, 31, 0x164748u);
    ctx->pc = 0x164744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164740u;
            // 0x164744: 0x24a53220  addiu       $a1, $a1, 0x3220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164748u; }
        if (ctx->pc != 0x164748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164748u; }
        if (ctx->pc != 0x164748u) { return; }
    }
    ctx->pc = 0x164748u;
label_164748:
    // 0x164748: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164748u;
    {
        const bool branch_taken_0x164748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16474Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164748u;
            // 0x16474c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164748) {
            ctx->pc = 0x164760u;
            goto label_164760;
        }
    }
    ctx->pc = 0x164750u;
    // 0x164750: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x164750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x164754: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x164754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164758: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x164758u;
    {
        const bool branch_taken_0x164758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16475Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164758u;
            // 0x16475c: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164758) {
            ctx->pc = 0x1647F4u;
            goto label_1647f4;
        }
    }
    ctx->pc = 0x164760u;
label_164760:
    // 0x164760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164764: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x164764u;
    SET_GPR_U32(ctx, 31, 0x16476Cu);
    ctx->pc = 0x164768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164764u;
            // 0x164768: 0x24a53228  addiu       $a1, $a1, 0x3228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16476Cu; }
        if (ctx->pc != 0x16476Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16476Cu; }
        if (ctx->pc != 0x16476Cu) { return; }
    }
    ctx->pc = 0x16476Cu;
label_16476c:
    // 0x16476c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16476Cu;
    {
        const bool branch_taken_0x16476c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16476Cu;
            // 0x164770: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16476c) {
            ctx->pc = 0x164790u;
            goto label_164790;
        }
    }
    ctx->pc = 0x164774u;
    // 0x164774: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x164774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x164778: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x164778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16477c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16477cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164780: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x164780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x164784: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x164784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x164788: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x164788u;
    {
        const bool branch_taken_0x164788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16478Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164788u;
            // 0x16478c: 0xac430024  sw          $v1, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164788) {
            ctx->pc = 0x1647F4u;
            goto label_1647f4;
        }
    }
    ctx->pc = 0x164790u;
label_164790:
    // 0x164790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164794: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x164794u;
    SET_GPR_U32(ctx, 31, 0x16479Cu);
    ctx->pc = 0x164798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164794u;
            // 0x164798: 0x24a53230  addiu       $a1, $a1, 0x3230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16479Cu; }
        if (ctx->pc != 0x16479Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16479Cu; }
        if (ctx->pc != 0x16479Cu) { return; }
    }
    ctx->pc = 0x16479Cu;
label_16479c:
    // 0x16479c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16479Cu;
    {
        const bool branch_taken_0x16479c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1647A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16479Cu;
            // 0x1647a0: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16479c) {
            ctx->pc = 0x1647C0u;
            goto label_1647c0;
        }
    }
    ctx->pc = 0x1647A4u;
    // 0x1647a4: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x1647a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1647a8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1647a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1647ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1647acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1647b0: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x1647b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x1647b4: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x1647b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1647b8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1647B8u;
    {
        const bool branch_taken_0x1647b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1647B8u;
            // 0x1647bc: 0xac430024  sw          $v1, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647b8) {
            ctx->pc = 0x1647F4u;
            goto label_1647f4;
        }
    }
    ctx->pc = 0x1647C0u;
label_1647c0:
    // 0x1647c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1647c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647c4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1647C4u;
    SET_GPR_U32(ctx, 31, 0x1647CCu);
    ctx->pc = 0x1647C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1647C4u;
            // 0x1647c8: 0x24a530e0  addiu       $a1, $a1, 0x30E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1647CCu; }
        if (ctx->pc != 0x1647CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1647CCu; }
        if (ctx->pc != 0x1647CCu) { return; }
    }
    ctx->pc = 0x1647CCu;
label_1647cc:
    // 0x1647cc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1647CCu;
    {
        const bool branch_taken_0x1647cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1647D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1647CCu;
            // 0x1647d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647cc) {
            ctx->pc = 0x1647ECu;
            goto label_1647ec;
        }
    }
    ctx->pc = 0x1647D4u;
    // 0x1647d4: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x1647d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1647d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1647d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1647dc: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1647dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1647e0: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x1647e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1647e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1647E4u;
    {
        const bool branch_taken_0x1647e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1647E4u;
            // 0x1647e8: 0xac430024  sw          $v1, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647e4) {
            ctx->pc = 0x1647F4u;
            goto label_1647f4;
        }
    }
    ctx->pc = 0x1647ECu;
label_1647ec:
    // 0x1647ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1647ECu;
    {
        const bool branch_taken_0x1647ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1647ECu;
            // 0x1647f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647ec) {
            ctx->pc = 0x1647FCu;
            goto label_1647fc;
        }
    }
    ctx->pc = 0x1647F4u;
label_1647f4:
    // 0x1647f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1647f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1647f8:
    // 0x1647f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1647f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1647fc:
    // 0x1647fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1647fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164804: 0x3e00008  jr          $ra
    ctx->pc = 0x164804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164804u;
            // 0x164808: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16480Cu;
}
