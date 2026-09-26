#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckInventPhoto__Fii
// Address: 0x2005d0 - 0x2006e4
void CheckInventPhoto__Fii_0x2005d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckInventPhoto__Fii_0x2005d0");
#endif

    switch (ctx->pc) {
        case 0x2005f8u: goto label_2005f8;
        case 0x200614u: goto label_200614;
        case 0x20061cu: goto label_20061c;
        default: break;
    }

    ctx->pc = 0x2005d0u;

    // 0x2005d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2005d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2005d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2005d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2005d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2005d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2005dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2005dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2005e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2005e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2005e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2005e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2005e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2005e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2005ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2005ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2005f0: 0xc07f84c  jal         func_1FE130
    ctx->pc = 0x2005F0u;
    SET_GPR_U32(ctx, 31, 0x2005F8u);
    ctx->pc = 0x2005F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2005F0u;
            // 0x2005f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE130u;
    if (runtime->hasFunction(0x1FE130u)) {
        auto targetFn = runtime->lookupFunction(0x1FE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2005F8u; }
        if (ctx->pc != 0x2005F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventUserDataPtr__Fv_0x1fe130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2005F8u; }
        if (ctx->pc != 0x2005F8u) { return; }
    }
    ctx->pc = 0x2005F8u;
label_2005f8:
    // 0x2005f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2005f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2005fc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2005FCu;
    {
        const bool branch_taken_0x2005fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x200600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2005FCu;
            // 0x200600: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005fc) {
            ctx->pc = 0x20060Cu;
            goto label_20060c;
        }
    }
    ctx->pc = 0x200604u;
    // 0x200604: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x200604u;
    {
        const bool branch_taken_0x200604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200604u;
            // 0x200608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200604) {
            ctx->pc = 0x2006C4u;
            goto label_2006c4;
        }
    }
    ctx->pc = 0x20060Cu;
label_20060c:
    // 0x20060c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20060cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200614:
    // 0x200614: 0xc07faac  jal         func_1FEAB0
    ctx->pc = 0x200614u;
    SET_GPR_U32(ctx, 31, 0x20061Cu);
    ctx->pc = 0x200618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200614u;
            // 0x200618: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20061Cu; }
        if (ctx->pc != 0x20061Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20061Cu; }
        if (ctx->pc != 0x20061Cu) { return; }
    }
    ctx->pc = 0x20061Cu;
label_20061c:
    // 0x20061c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x20061Cu;
    {
        const bool branch_taken_0x20061c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20061c) {
            ctx->pc = 0x2006B0u;
            goto label_2006b0;
        }
    }
    ctx->pc = 0x200624u;
    // 0x200624: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x200624u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200628: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x200628u;
    {
        const bool branch_taken_0x200628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x200628) {
            ctx->pc = 0x2006B0u;
            goto label_2006b0;
        }
    }
    ctx->pc = 0x200630u;
    // 0x200630: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x200630u;
    {
        const bool branch_taken_0x200630 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x200630) {
            ctx->pc = 0x200658u;
            goto label_200658;
        }
    }
    ctx->pc = 0x200638u;
    // 0x200638: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x200638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x20063c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x20063cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x200640: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x200640u;
    {
        const bool branch_taken_0x200640 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x200640) {
            ctx->pc = 0x2006B0u;
            goto label_2006b0;
        }
    }
    ctx->pc = 0x200648u;
    // 0x200648: 0x14540019  bne         $v0, $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x200648u;
    {
        const bool branch_taken_0x200648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x200648) {
            ctx->pc = 0x2006B0u;
            goto label_2006b0;
        }
    }
    ctx->pc = 0x200650u;
    // 0x200650: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x200650u;
    {
        const bool branch_taken_0x200650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200650u;
            // 0x200654: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200650) {
            ctx->pc = 0x2006B0u;
            goto label_2006b0;
        }
    }
    ctx->pc = 0x200658u;
label_200658:
    // 0x200658: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x200658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20065c: 0x16630009  bne         $s3, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20065Cu;
    {
        const bool branch_taken_0x20065c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x20065c) {
            ctx->pc = 0x200684u;
            goto label_200684;
        }
    }
    ctx->pc = 0x200664u;
    // 0x200664: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x200664u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x200668: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x200668u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20066c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x20066Cu;
    {
        const bool branch_taken_0x20066c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20066c) {
            ctx->pc = 0x2006B0u;
            goto label_2006b0;
        }
    }
    ctx->pc = 0x200674u;
    // 0x200674: 0x1454000e  bne         $v0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x200674u;
    {
        const bool branch_taken_0x200674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x200674) {
            ctx->pc = 0x2006B0u;
            goto label_2006b0;
        }
    }
    ctx->pc = 0x20067Cu;
    // 0x20067c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20067Cu;
    {
        const bool branch_taken_0x20067c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20067Cu;
            // 0x200680: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20067c) {
            ctx->pc = 0x2006B0u;
            goto label_2006b0;
        }
    }
    ctx->pc = 0x200684u;
label_200684:
    // 0x200684: 0x0  nop
    ctx->pc = 0x200684u;
    // NOP
    // 0x200688: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x200688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20068c: 0x16630008  bne         $s3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20068Cu;
    {
        const bool branch_taken_0x20068c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x20068c) {
            ctx->pc = 0x2006B0u;
            goto label_2006b0;
        }
    }
    ctx->pc = 0x200694u;
    // 0x200694: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x200694u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x200698: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x200698u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20069c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x20069Cu;
    {
        const bool branch_taken_0x20069c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20069c) {
            ctx->pc = 0x2006B0u;
            goto label_2006b0;
        }
    }
    ctx->pc = 0x2006A4u;
    // 0x2006a4: 0x14540002  bne         $v0, $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x2006A4u;
    {
        const bool branch_taken_0x2006a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2006a4) {
            ctx->pc = 0x2006B0u;
            goto label_2006b0;
        }
    }
    ctx->pc = 0x2006ACu;
    // 0x2006ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2006acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2006b0:
    // 0x2006b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2006b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2006b4: 0x2a42001e  slti        $v0, $s2, 0x1E
    ctx->pc = 0x2006b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2006b8: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2006B8u;
    {
        const bool branch_taken_0x2006b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2006BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2006B8u;
            // 0x2006bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006b8) {
            ctx->pc = 0x200614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200614;
        }
    }
    ctx->pc = 0x2006C0u;
    // 0x2006c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2006c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2006c4:
    // 0x2006c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2006c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2006c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2006c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2006cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2006ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2006d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2006d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2006d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2006d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2006d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2006d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2006dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2006DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2006E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2006DCu;
            // 0x2006e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2006E4u;
}
