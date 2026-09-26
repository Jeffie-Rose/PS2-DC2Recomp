#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _multadd
// Address: 0x1273c0 - 0x1274d4
void _multadd_0x1273c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_multadd_0x1273c0");
#endif

    switch (ctx->pc) {
        case 0x127400u: goto label_127400;
        case 0x12746cu: goto label_12746c;
        case 0x127488u: goto label_127488;
        case 0x127494u: goto label_127494;
        default: break;
    }

    ctx->pc = 0x1273c0u;

    // 0x1273c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1273c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1273c4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1273c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1273c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1273cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1273ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1273d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1273d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1273d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1273d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1273dc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1273dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273e0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1273e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1273e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1273e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1273e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1273ec: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x1273ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1273f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1273f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1273f4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x1273f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273f8: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x1273f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1273fc: 0x0  nop
    ctx->pc = 0x1273fcu;
    // NOP
label_127400:
    // 0x127400: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x127400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x127404: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x127404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x127408: 0x132302a  slt         $a2, $t1, $s2
    ctx->pc = 0x127408u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12740c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x12740cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x127410: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x127410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x127414: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x127414u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x127418: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x127418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12741c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x12741cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x127420: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x127420u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x127424: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x127424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x127428: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x127428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x12742c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x12742cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x127430: 0x39c02  srl         $s3, $v1, 16
    ctx->pc = 0x127430u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x127434: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x127434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x127438: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x127438u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x12743c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x12743Cu;
    {
        const bool branch_taken_0x12743c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x127440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12743Cu;
            // 0x127440: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12743c) {
            ctx->pc = 0x127400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127400;
        }
    }
    ctx->pc = 0x127444u;
    // 0x127444: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x127444u;
    {
        const bool branch_taken_0x127444 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x127448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127444u;
            // 0x127448: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127444) {
            ctx->pc = 0x1274B4u;
            goto label_1274b4;
        }
    }
    ctx->pc = 0x12744Cu;
    // 0x12744c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x12744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x127450: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x127450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x127454: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x127454u;
    {
        const bool branch_taken_0x127454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127454u;
            // 0x127458: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127454) {
            ctx->pc = 0x1274A0u;
            goto label_1274a0;
        }
    }
    ctx->pc = 0x12745Cu;
    // 0x12745c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x12745cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x127460: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x127460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127464: 0xc049cba  jal         func_1272E8
    ctx->pc = 0x127464u;
    SET_GPR_U32(ctx, 31, 0x12746Cu);
    ctx->pc = 0x127468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127464u;
            // 0x127468: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272E8u;
    if (runtime->hasFunction(0x1272E8u)) {
        auto targetFn = runtime->lookupFunction(0x1272E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12746Cu; }
        if (ctx->pc != 0x12746Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1272e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12746Cu; }
        if (ctx->pc != 0x12746Cu) { return; }
    }
    ctx->pc = 0x12746Cu;
label_12746c:
    // 0x12746c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x12746cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x127470: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x127470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127474: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x127474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x127478: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x127478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x12747c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x12747cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x127480: 0xc049c18  jal         func_127060
    ctx->pc = 0x127480u;
    SET_GPR_U32(ctx, 31, 0x127488u);
    ctx->pc = 0x127484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127480u;
            // 0x127484: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127488u; }
        if (ctx->pc != 0x127488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127488u; }
        if (ctx->pc != 0x127488u) { return; }
    }
    ctx->pc = 0x127488u;
label_127488:
    // 0x127488: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x127488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12748c: 0xc049ce4  jal         func_127390
    ctx->pc = 0x12748Cu;
    SET_GPR_U32(ctx, 31, 0x127494u);
    ctx->pc = 0x127490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12748Cu;
            // 0x127490: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127494u; }
        if (ctx->pc != 0x127494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127494u; }
        if (ctx->pc != 0x127494u) { return; }
    }
    ctx->pc = 0x127494u;
label_127494:
    // 0x127494: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x127494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127498: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x127498u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x12749c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x12749cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1274a0:
    // 0x1274a0: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1274a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1274a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1274a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1274a8: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1274a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x1274ac: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1274acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x1274b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1274b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1274b4:
    // 0x1274b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1274b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1274b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1274b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1274bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1274bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1274c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1274c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1274c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1274c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1274c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1274c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1274cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1274CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1274D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1274CCu;
            // 0x1274d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1274D4u;
}
