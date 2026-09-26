#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSeStop__FUiii
// Address: 0x18e830 - 0x18e9f0
void sndSeStop__FUiii_0x18e830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSeStop__FUiii_0x18e830");
#endif

    switch (ctx->pc) {
        case 0x18e86cu: goto label_18e86c;
        case 0x18e874u: goto label_18e874;
        case 0x18e880u: goto label_18e880;
        case 0x18e92cu: goto label_18e92c;
        case 0x18e954u: goto label_18e954;
        case 0x18e968u: goto label_18e968;
        case 0x18e9ccu: goto label_18e9cc;
        default: break;
    }

    ctx->pc = 0x18e830u;

    // 0x18e830: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18e830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18e834: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18e834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e838: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18e838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18e83c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18e83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18e840: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18e840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18e844: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18e844u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18e848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18e84c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18e84cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e850: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18e854: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18e854u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e85c: 0x12a3005b  beq         $s5, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x18E85Cu;
    {
        const bool branch_taken_0x18e85c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x18E860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E85Cu;
            // 0x18e860: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e85c) {
            ctx->pc = 0x18E9CCu;
            goto label_18e9cc;
        }
    }
    ctx->pc = 0x18E864u;
    // 0x18e864: 0xc0632c0  jal         func_18CB00
    ctx->pc = 0x18E864u;
    SET_GPR_U32(ctx, 31, 0x18E86Cu);
    ctx->pc = 0x18CB00u;
    if (runtime->hasFunction(0x18CB00u)) {
        auto targetFn = runtime->lookupFunction(0x18CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E86Cu; }
        if (ctx->pc != 0x18E86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortNo__FUi_0x18cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E86Cu; }
        if (ctx->pc != 0x18E86Cu) { return; }
    }
    ctx->pc = 0x18E86Cu;
label_18e86c:
    // 0x18e86c: 0xc0632c4  jal         func_18CB10
    ctx->pc = 0x18E86Cu;
    SET_GPR_U32(ctx, 31, 0x18E874u);
    ctx->pc = 0x18E870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E86Cu;
            // 0x18e870: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CB10u;
    if (runtime->hasFunction(0x18CB10u)) {
        auto targetFn = runtime->lookupFunction(0x18CB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E874u; }
        if (ctx->pc != 0x18E874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBankNo__FUi_0x18cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E874u; }
        if (ctx->pc != 0x18E874u) { return; }
    }
    ctx->pc = 0x18E874u;
label_18e874:
    // 0x18e874: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18e874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e878: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18E878u;
    SET_GPR_U32(ctx, 31, 0x18E880u);
    ctx->pc = 0x18E87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E878u;
            // 0x18e87c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E880u; }
        if (ctx->pc != 0x18E880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E880u; }
        if (ctx->pc != 0x18E880u) { return; }
    }
    ctx->pc = 0x18E880u;
label_18e880:
    // 0x18e880: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18e880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e884: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
    ctx->pc = 0x18E884u;
    {
        const bool branch_taken_0x18e884 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e884) {
            ctx->pc = 0x18E9CCu;
            goto label_18e9cc;
        }
    }
    ctx->pc = 0x18E88Cu;
    // 0x18e88c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E88Cu;
    {
        const bool branch_taken_0x18e88c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x18E890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E88Cu;
            // 0x18e890: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e88c) {
            ctx->pc = 0x18E8A4u;
            goto label_18e8a4;
        }
    }
    ctx->pc = 0x18E894u;
    // 0x18e894: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x18e894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18e898: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x18e898u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e89c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E89Cu;
    {
        const bool branch_taken_0x18e89c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E89Cu;
            // 0x18e8a0: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e89c) {
            ctx->pc = 0x18E8ACu;
            goto label_18e8ac;
        }
    }
    ctx->pc = 0x18E8A4u;
label_18e8a4:
    // 0x18e8a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18E8A4u;
    {
        const bool branch_taken_0x18e8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8a4) {
            ctx->pc = 0x18E8BCu;
            goto label_18e8bc;
        }
    }
    ctx->pc = 0x18E8ACu;
label_18e8ac:
    // 0x18e8ac: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x18e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18e8b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18e8b4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x18e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18e8b8: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x18e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_18e8bc:
    // 0x18e8bc: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x18E8BCu;
    {
        const bool branch_taken_0x18e8bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8bc) {
            ctx->pc = 0x18E9CCu;
            goto label_18e9cc;
        }
    }
    ctx->pc = 0x18E8C4u;
    // 0x18e8c4: 0x6800005  bltz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E8C4u;
    {
        const bool branch_taken_0x18e8c4 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x18E8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8C4u;
            // 0x18e8c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8c4) {
            ctx->pc = 0x18E8DCu;
            goto label_18e8dc;
        }
    }
    ctx->pc = 0x18E8CCu;
    // 0x18e8cc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18e8d0: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x18e8d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e8d4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E8D4u;
    {
        const bool branch_taken_0x18e8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e8d4) {
            ctx->pc = 0x18E8E4u;
            goto label_18e8e4;
        }
    }
    ctx->pc = 0x18E8DCu;
label_18e8dc:
    // 0x18e8dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18E8DCu;
    {
        const bool branch_taken_0x18e8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8dc) {
            ctx->pc = 0x18E8F8u;
            goto label_18e8f8;
        }
    }
    ctx->pc = 0x18E8E4u;
label_18e8e4:
    // 0x18e8e4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18e8e8: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x18e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x18e8ec: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x18e8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x18e8f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18e8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18e8f4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x18e8f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e8f8:
    // 0x18e8f8: 0x12400034  beqz        $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x18E8F8u;
    {
        const bool branch_taken_0x18e8f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8f8) {
            ctx->pc = 0x18E9CCu;
            goto label_18e9cc;
        }
    }
    ctx->pc = 0x18E900u;
    // 0x18e900: 0x82440004  lb          $a0, 0x4($s2)
    ctx->pc = 0x18e900u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18e904: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x18E904u;
    {
        const bool branch_taken_0x18e904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E904u;
            // 0x18e908: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e904) {
            ctx->pc = 0x18E9CCu;
            goto label_18e9cc;
        }
    }
    ctx->pc = 0x18E90Cu;
    // 0x18e90c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E90Cu;
    {
        const bool branch_taken_0x18e90c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18e90c) {
            ctx->pc = 0x18E930u;
            goto label_18e930;
        }
    }
    ctx->pc = 0x18E914u;
    // 0x18e914: 0x8e230210  lw          $v1, 0x210($s1)
    ctx->pc = 0x18e914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x18e918: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E918u;
    {
        const bool branch_taken_0x18e918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e918) {
            ctx->pc = 0x18E930u;
            goto label_18e930;
        }
    }
    ctx->pc = 0x18E920u;
    // 0x18e920: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18e920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18e924: 0xc063db0  jal         func_18F6C0
    ctx->pc = 0x18E924u;
    SET_GPR_U32(ctx, 31, 0x18E92Cu);
    ctx->pc = 0x18E928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E924u;
            // 0x18e928: 0x82450005  lb          $a1, 0x5($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F6C0u;
    if (runtime->hasFunction(0x18F6C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E92Cu; }
        if (ctx->pc != 0x18E92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSqStop__Fii_0x18f6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E92Cu; }
        if (ctx->pc != 0x18E92Cu) { return; }
    }
    ctx->pc = 0x18E92Cu;
label_18e92c:
    // 0x18e92c: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x18e92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_18e930:
    // 0x18e930: 0x82440004  lb          $a0, 0x4($s2)
    ctx->pc = 0x18e930u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18e934: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e938: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E938u;
    {
        const bool branch_taken_0x18e938 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18e938) {
            ctx->pc = 0x18E954u;
            goto label_18e954;
        }
    }
    ctx->pc = 0x18E940u;
    // 0x18e940: 0x82450005  lb          $a1, 0x5($s2)
    ctx->pc = 0x18e940u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x18e944: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18e944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e948: 0x82460006  lb          $a2, 0x6($s2)
    ctx->pc = 0x18e948u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x18e94c: 0xc063c78  jal         func_18F1E0
    ctx->pc = 0x18E94Cu;
    SET_GPR_U32(ctx, 31, 0x18E954u);
    ctx->pc = 0x18E950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E94Cu;
            // 0x18e950: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F1E0u;
    if (runtime->hasFunction(0x18F1E0u)) {
        auto targetFn = runtime->lookupFunction(0x18F1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E954u; }
        if (ctx->pc != 0x18E954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStopPrKr__FUiiii_0x18f1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E954u; }
        if (ctx->pc != 0x18E954u) { return; }
    }
    ctx->pc = 0x18E954u;
label_18e954:
    // 0x18e954: 0x82440004  lb          $a0, 0x4($s2)
    ctx->pc = 0x18e954u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18e958: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18e958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18e95c: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x18E95Cu;
    {
        const bool branch_taken_0x18e95c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18E960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E95Cu;
            // 0x18e960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e95c) {
            ctx->pc = 0x18E9CCu;
            goto label_18e9cc;
        }
    }
    ctx->pc = 0x18E964u;
    // 0x18e964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18e964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e968:
    // 0x18e968: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x18e968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x18e96c: 0x2464021c  addiu       $a0, $v1, 0x21C
    ctx->pc = 0x18e96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 540));
    // 0x18e970: 0x8463021c  lh          $v1, 0x21C($v1)
    ctx->pc = 0x18e970u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 540)));
    // 0x18e974: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18E974u;
    {
        const bool branch_taken_0x18e974 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x18e974) {
            ctx->pc = 0x18E9A8u;
            goto label_18e9a8;
        }
    }
    ctx->pc = 0x18E97Cu;
    // 0x18e97c: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x18e97cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18e980: 0x14700009  bne         $v1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E980u;
    {
        const bool branch_taken_0x18e980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x18e980) {
            ctx->pc = 0x18E9A8u;
            goto label_18e9a8;
        }
    }
    ctx->pc = 0x18E988u;
    // 0x18e988: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x18e988u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x18e98c: 0x14740006  bne         $v1, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E98Cu;
    {
        const bool branch_taken_0x18e98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x18e98c) {
            ctx->pc = 0x18E9A8u;
            goto label_18e9a8;
        }
    }
    ctx->pc = 0x18E994u;
    // 0x18e994: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x18e994u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x18e998: 0x14730003  bne         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E998u;
    {
        const bool branch_taken_0x18e998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x18e998) {
            ctx->pc = 0x18E9A8u;
            goto label_18e9a8;
        }
    }
    ctx->pc = 0x18E9A0u;
    // 0x18e9a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18E9A0u;
    {
        const bool branch_taken_0x18e9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e9a0) {
            ctx->pc = 0x18E9BCu;
            goto label_18e9bc;
        }
    }
    ctx->pc = 0x18E9A8u;
label_18e9a8:
    // 0x18e9a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18e9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18e9ac: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x18e9acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18e9b0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x18E9B0u;
    {
        const bool branch_taken_0x18e9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E9B0u;
            // 0x18e9b4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9b0) {
            ctx->pc = 0x18E968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18e968;
        }
    }
    ctx->pc = 0x18E9B8u;
    // 0x18e9b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e9bc:
    // 0x18e9bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E9BCu;
    {
        const bool branch_taken_0x18e9bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e9bc) {
            ctx->pc = 0x18E9CCu;
            goto label_18e9cc;
        }
    }
    ctx->pc = 0x18E9C4u;
    // 0x18e9c4: 0xc0640bc  jal         func_1902F0
    ctx->pc = 0x18E9C4u;
    SET_GPR_U32(ctx, 31, 0x18E9CCu);
    ctx->pc = 0x18E9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E9C4u;
            // 0x18e9c8: 0x84840000  lh          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1902F0u;
    if (runtime->hasFunction(0x1902F0u)) {
        auto targetFn = runtime->lookupFunction(0x1902F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9CCu; }
        if (ctx->pc != 0x18E9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopSeSeq__Fi_0x1902f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9CCu; }
        if (ctx->pc != 0x18E9CCu) { return; }
    }
    ctx->pc = 0x18E9CCu;
label_18e9cc:
    // 0x18e9cc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18e9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18e9d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18e9d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e9d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18e9d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e9d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18e9d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e9dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e9dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e9e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e9e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e9e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x18E9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E9E8u;
            // 0x18e9ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E9F0u;
}
