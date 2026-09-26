#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdataNetaMemoStr__11CMenuInventFv
// Address: 0x2086e0 - 0x208874
void UpdataNetaMemoStr__11CMenuInventFv_0x2086e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdataNetaMemoStr__11CMenuInventFv_0x2086e0");
#endif

    switch (ctx->pc) {
        case 0x20870cu: goto label_20870c;
        case 0x208720u: goto label_208720;
        case 0x20873cu: goto label_20873c;
        case 0x2087d0u: goto label_2087d0;
        case 0x2087e8u: goto label_2087e8;
        case 0x2087fcu: goto label_2087fc;
        case 0x20882cu: goto label_20882c;
        default: break;
    }

    ctx->pc = 0x2086e0u;

    // 0x2086e0: 0x27bdf980  addiu       $sp, $sp, -0x680
    ctx->pc = 0x2086e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965632));
    // 0x2086e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2086e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2086e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2086e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2086ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2086ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2086f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2086f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2086f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2086f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2086f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2086fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2086fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x208700: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x208700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x208704: 0xc07f84c  jal         func_1FE130
    ctx->pc = 0x208704u;
    SET_GPR_U32(ctx, 31, 0x20870Cu);
    ctx->pc = 0x208708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208704u;
            // 0x208708: 0xa780910c  sh          $zero, -0x6EF4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294938892), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE130u;
    if (runtime->hasFunction(0x1FE130u)) {
        auto targetFn = runtime->lookupFunction(0x1FE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20870Cu; }
        if (ctx->pc != 0x20870Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventUserDataPtr__Fv_0x1fe130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20870Cu; }
        if (ctx->pc != 0x20870Cu) { return; }
    }
    ctx->pc = 0x20870Cu;
label_20870c:
    // 0x20870c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x20870cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208710: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x208710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208714: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x208714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208718: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x208718u;
    {
        const bool branch_taken_0x208718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20871Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208718u;
            // 0x20871c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208718) {
            ctx->pc = 0x2087B8u;
            goto label_2087b8;
        }
    }
    ctx->pc = 0x208720u;
label_208720:
    // 0x208720: 0x8f8290f0  lw          $v0, -0x6F10($gp)
    ctx->pc = 0x208720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x208724: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x208724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x208728: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x208728u;
    {
        const bool branch_taken_0x208728 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x208728) {
            ctx->pc = 0x2087D0u;
            goto label_2087d0;
        }
    }
    ctx->pc = 0x208730u;
    // 0x208730: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x208730u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x208734: 0xc07faf0  jal         func_1FEBC0
    ctx->pc = 0x208734u;
    SET_GPR_U32(ctx, 31, 0x20873Cu);
    ctx->pc = 0x208738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208734u;
            // 0x208738: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEBC0u;
    if (runtime->hasFunction(0x1FEBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20873Cu; }
        if (ctx->pc != 0x20873Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNetaFlag__15CInventUserDataFi_0x1febc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20873Cu; }
        if (ctx->pc != 0x20873Cu) { return; }
    }
    ctx->pc = 0x20873Cu;
label_20873c:
    // 0x20873c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x20873cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x208740: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x208740u;
    {
        const bool branch_taken_0x208740 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x208740) {
            ctx->pc = 0x2087ACu;
            goto label_2087ac;
        }
    }
    ctx->pc = 0x208748u;
    // 0x208748: 0x8785910c  lh          $a1, -0x6EF4($gp)
    ctx->pc = 0x208748u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938892)));
    // 0x20874c: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x20874cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x208750: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x208750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x208754: 0x96460000  lhu         $a2, 0x0($s2)
    ctx->pc = 0x208754u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x208758: 0x2463bfd0  addiu       $v1, $v1, -0x4030
    ctx->pc = 0x208758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950864));
    // 0x20875c: 0x2442b7d0  addiu       $v0, $v0, -0x4830
    ctx->pc = 0x20875cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948816));
    // 0x208760: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x208760u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x208764: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x208764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x208768: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x208768u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20876c: 0xa4860000  sh          $a2, 0x0($a0)
    ctx->pc = 0x20876cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x208770: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x208770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x208774: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x208774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x208778: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x208778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x20877c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x20877cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x208780: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x208780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x208784: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x208784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x208788: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x208788u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20878c: 0x284103e8  slti        $at, $v0, 0x3E8
    ctx->pc = 0x20878cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x208790: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x208790u;
    {
        const bool branch_taken_0x208790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x208790) {
            ctx->pc = 0x20879Cu;
            goto label_20879c;
        }
    }
    ctx->pc = 0x208798u;
    // 0x208798: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x208798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20879c:
    // 0x20879c: 0x0  nop
    ctx->pc = 0x20879cu;
    // NOP
    // 0x2087a0: 0x8782910c  lh          $v0, -0x6EF4($gp)
    ctx->pc = 0x2087a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938892)));
    // 0x2087a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2087a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2087a8: 0xa782910c  sh          $v0, -0x6EF4($gp)
    ctx->pc = 0x2087a8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938892), (uint16_t)GPR_U32(ctx, 2));
label_2087ac:
    // 0x2087ac: 0x0  nop
    ctx->pc = 0x2087acu;
    // NOP
    // 0x2087b0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2087b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2087b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2087b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2087b8:
    // 0x2087b8: 0x878290f4  lh          $v0, -0x6F0C($gp)
    ctx->pc = 0x2087b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938868)));
    // 0x2087bc: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x2087bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2087c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2087C0u;
    {
        const bool branch_taken_0x2087c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2087C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2087C0u;
            // 0x2087c4: 0x2a020200  slti        $v0, $s0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)512) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087c0) {
            ctx->pc = 0x2087D0u;
            goto label_2087d0;
        }
    }
    ctx->pc = 0x2087C8u;
    // 0x2087c8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2087C8u;
    {
        const bool branch_taken_0x2087c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2087c8) {
            ctx->pc = 0x208720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_208720;
        }
    }
    ctx->pc = 0x2087D0u;
label_2087d0:
    // 0x2087d0: 0x86840392  lh          $a0, 0x392($s4)
    ctx->pc = 0x2087d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 914)));
    // 0x2087d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2087d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2087d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2087d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2087dc: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2087dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2087e0: 0xc08216c  jal         func_2085B0
    ctx->pc = 0x2087E0u;
    SET_GPR_U32(ctx, 31, 0x2087E8u);
    ctx->pc = 0x2087E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2087E0u;
            // 0x2087e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2085B0u;
    if (runtime->hasFunction(0x2085B0u)) {
        auto targetFn = runtime->lookupFunction(0x2085B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2087E8u; }
        if (ctx->pc != 0x2087E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        neta_sort__FiiiPi_0x2085b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2087E8u; }
        if (ctx->pc != 0x2087E8u) { return; }
    }
    ctx->pc = 0x2087E8u;
label_2087e8:
    // 0x2087e8: 0x86840392  lh          $a0, 0x392($s4)
    ctx->pc = 0x2087e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 914)));
    // 0x2087ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2087ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2087f0: 0x8786910c  lh          $a2, -0x6EF4($gp)
    ctx->pc = 0x2087f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938892)));
    // 0x2087f4: 0xc08216c  jal         func_2085B0
    ctx->pc = 0x2087F4u;
    SET_GPR_U32(ctx, 31, 0x2087FCu);
    ctx->pc = 0x2087F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2087F4u;
            // 0x2087f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2085B0u;
    if (runtime->hasFunction(0x2085B0u)) {
        auto targetFn = runtime->lookupFunction(0x2085B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2087FCu; }
        if (ctx->pc != 0x2087FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        neta_sort__FiiiPi_0x2085b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2087FCu; }
        if (ctx->pc != 0x2087FCu) { return; }
    }
    ctx->pc = 0x2087FCu;
label_2087fc:
    // 0x2087fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2087fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x208800: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x208800u;
    {
        const bool branch_taken_0x208800 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x208800) {
            ctx->pc = 0x2087D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2087d0;
        }
    }
    ctx->pc = 0x208808u;
    // 0x208808: 0x8789910c  lh          $t1, -0x6EF4($gp)
    ctx->pc = 0x208808u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938892)));
    // 0x20880c: 0x29210200  slti        $at, $t1, 0x200
    ctx->pc = 0x20880cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x208810: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x208810u;
    {
        const bool branch_taken_0x208810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x208814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208810u;
            // 0x208814: 0x93840  sll         $a3, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208810) {
            ctx->pc = 0x208850u;
            goto label_208850;
        }
    }
    ctx->pc = 0x208818u;
    // 0x208818: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x208818u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x20881c: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x20881cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x208820: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x208820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x208824: 0x24c6bfd0  addiu       $a2, $a2, -0x4030
    ctx->pc = 0x208824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950864));
    // 0x208828: 0x2484b7d0  addiu       $a0, $a0, -0x4830
    ctx->pc = 0x208828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948816));
label_20882c:
    // 0x20882c: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x20882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x208830: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x208830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x208834: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x208834u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x208838: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x208838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x20883c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20883cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x208840: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x208840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x208844: 0x29230200  slti        $v1, $t1, 0x200
    ctx->pc = 0x208844u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x208848: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x208848u;
    {
        const bool branch_taken_0x208848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20884Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208848u;
            // 0x20884c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208848) {
            ctx->pc = 0x20882Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20882c;
        }
    }
    ctx->pc = 0x208850u;
label_208850:
    // 0x208850: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x208850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x208854: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x208854u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x208858: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x208858u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20885c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20885cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208860: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x208860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208864: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x208864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x208868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20886c: 0x3e00008  jr          $ra
    ctx->pc = 0x20886Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20886Cu;
            // 0x208870: 0x27bd0680  addiu       $sp, $sp, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208874u;
}
