#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckItemEquip__Fii
// Address: 0x196520 - 0x1965b4
void CheckItemEquip__Fii_0x196520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckItemEquip__Fii_0x196520");
#endif

    switch (ctx->pc) {
        case 0x196540u: goto label_196540;
        default: break;
    }

    ctx->pc = 0x196520u;

    // 0x196520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x196520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x196524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x196524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x196528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19652c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x196530: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x196530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196534: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x196534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196538: 0xc06570c  jal         func_195C30
    ctx->pc = 0x196538u;
    SET_GPR_U32(ctx, 31, 0x196540u);
    ctx->pc = 0x19653Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196538u;
            // 0x19653c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C30u;
    if (runtime->hasFunction(0x195C30u)) {
        auto targetFn = runtime->lookupFunction(0x195C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196540u; }
        if (ctx->pc != 0x196540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemInfoData__Fi_0x195c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196540u; }
        if (ctx->pc != 0x196540u) { return; }
    }
    ctx->pc = 0x196540u;
label_196540:
    // 0x196540: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196540u;
    {
        const bool branch_taken_0x196540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196540u;
            // 0x196544: 0x2402012a  addiu       $v0, $zero, 0x12A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196540) {
            ctx->pc = 0x196550u;
            goto label_196550;
        }
    }
    ctx->pc = 0x196548u;
    // 0x196548: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x196548u;
    {
        const bool branch_taken_0x196548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19654Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196548u;
            // 0x19654c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196548) {
            ctx->pc = 0x1965A0u;
            goto label_1965a0;
        }
    }
    ctx->pc = 0x196550u;
label_196550:
    // 0x196550: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196550u;
    {
        const bool branch_taken_0x196550 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x196554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196550u;
            // 0x196554: 0x24020160  addiu       $v0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196550) {
            ctx->pc = 0x196568u;
            goto label_196568;
        }
    }
    ctx->pc = 0x196558u;
    // 0x196558: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x196558u;
    {
        const bool branch_taken_0x196558 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19655Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196558u;
            // 0x19655c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196558) {
            ctx->pc = 0x1965A0u;
            goto label_1965a0;
        }
    }
    ctx->pc = 0x196560u;
    // 0x196560: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x196560u;
    {
        const bool branch_taken_0x196560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196560u;
            // 0x196564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196560) {
            ctx->pc = 0x1965A0u;
            goto label_1965a0;
        }
    }
    ctx->pc = 0x196568u;
label_196568:
    // 0x196568: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196568u;
    {
        const bool branch_taken_0x196568 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x19656Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196568u;
            // 0x19656c: 0x24020171  addiu       $v0, $zero, 0x171 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 369));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196568) {
            ctx->pc = 0x196584u;
            goto label_196584;
        }
    }
    ctx->pc = 0x196570u;
    // 0x196570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196574: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x196574u;
    {
        const bool branch_taken_0x196574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x196578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196574u;
            // 0x196578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196574) {
            ctx->pc = 0x19659Cu;
            goto label_19659c;
        }
    }
    ctx->pc = 0x19657Cu;
    // 0x19657c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19657Cu;
    {
        const bool branch_taken_0x19657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19657Cu;
            // 0x196580: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19657c) {
            ctx->pc = 0x1965A4u;
            goto label_1965a4;
        }
    }
    ctx->pc = 0x196584u;
label_196584:
    // 0x196584: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196584u;
    {
        const bool branch_taken_0x196584 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x196584) {
            ctx->pc = 0x19659Cu;
            goto label_19659c;
        }
    }
    ctx->pc = 0x19658Cu;
    // 0x19658c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19658Cu;
    {
        const bool branch_taken_0x19658c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x196590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19658Cu;
            // 0x196590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19658c) {
            ctx->pc = 0x19659Cu;
            goto label_19659c;
        }
    }
    ctx->pc = 0x196594u;
    // 0x196594: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196594u;
    {
        const bool branch_taken_0x196594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196594) {
            ctx->pc = 0x1965A0u;
            goto label_1965a0;
        }
    }
    ctx->pc = 0x19659Cu;
label_19659c:
    // 0x19659c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1965a0:
    // 0x1965a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1965a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1965a4:
    // 0x1965a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1965a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1965a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1965a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1965ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1965ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1965B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1965ACu;
            // 0x1965b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1965B4u;
}
