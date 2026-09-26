#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetItemCmdMsgPos__14CBaseMenuClassFPi
// Address: 0x2384d0 - 0x238950
void SetItemCmdMsgPos__14CBaseMenuClassFPi_0x2384d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetItemCmdMsgPos__14CBaseMenuClassFPi_0x2384d0");
#endif

    switch (ctx->pc) {
        case 0x238564u: goto label_238564;
        case 0x23857cu: goto label_23857c;
        case 0x238778u: goto label_238778;
        case 0x2387acu: goto label_2387ac;
        case 0x2387e8u: goto label_2387e8;
        case 0x2388b0u: goto label_2388b0;
        default: break;
    }

    ctx->pc = 0x2384d0u;

    // 0x2384d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2384d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2384d4: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x2384d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x2384d8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2384d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2384dc: 0x27a80098  addiu       $t0, $sp, 0x98
    ctx->pc = 0x2384dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2384e0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2384e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2384e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2384e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2384e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2384e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2384ec: 0x2463ca40  addiu       $v1, $v1, -0x35C0
    ctx->pc = 0x2384ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953536));
    // 0x2384f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2384f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2384f4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2384f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2384f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2384f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2384fc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2384fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238500: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x238500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x238504: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x238504u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238508: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x238508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23850c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23850cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x238514: 0xdf879600  ld          $a3, -0x6A00($gp)
    ctx->pc = 0x238514u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294940160)));
    // 0x238518: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x238518u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x23851c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x23851cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x238520: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x238520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x238524: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x238524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x238528: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x238528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23852c: 0x24a5002a  addiu       $a1, $a1, 0x2A
    ctx->pc = 0x23852cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 42));
    // 0x238530: 0xafa5009c  sw          $a1, 0x9C($sp)
    ctx->pc = 0x238530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 5));
    // 0x238534: 0x8497005c  lh          $s7, 0x5C($a0)
    ctx->pc = 0x238534u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x238538: 0xaf8695fc  sw          $a2, -0x6A04($gp)
    ctx->pc = 0x238538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940156), GPR_U32(ctx, 6));
    // 0x23853c: 0x8484005a  lh          $a0, 0x5A($a0)
    ctx->pc = 0x23853cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x238540: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x238540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x238544: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x238544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x238548: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x238548u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23854c: 0x122000f5  beqz        $s1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x23854Cu;
    {
        const bool branch_taken_0x23854c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x238550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23854Cu;
            // 0x238550: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23854c) {
            ctx->pc = 0x238924u;
            goto label_238924;
        }
    }
    ctx->pc = 0x238554u;
    // 0x238554: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x238554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x238558: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x238558u;
    {
        const bool branch_taken_0x238558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23855Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238558u;
            // 0x23855c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238558) {
            ctx->pc = 0x2385A4u;
            goto label_2385a4;
        }
    }
    ctx->pc = 0x238560u;
    // 0x238560: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x238560u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238564:
    // 0x238564: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x238564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x238568: 0x8c651a04  lw          $a1, 0x1A04($v1)
    ctx->pc = 0x238568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6660)));
    // 0x23856c: 0x4a0000d  bltz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x23856Cu;
    {
        const bool branch_taken_0x23856c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x23856c) {
            ctx->pc = 0x2385A4u;
            goto label_2385a4;
        }
    }
    ctx->pc = 0x238574u;
    // 0x238574: 0xc05571c  jal         func_155C70
    ctx->pc = 0x238574u;
    SET_GPR_U32(ctx, 31, 0x23857Cu);
    ctx->pc = 0x238578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238574u;
            // 0x238578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155C70u;
    if (runtime->hasFunction(0x155C70u)) {
        auto targetFn = runtime->lookupFunction(0x155C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23857Cu; }
        if (ctx->pc != 0x23857Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMesWidth_system__6ClsMesFi_0x155c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23857Cu; }
        if (ctx->pc != 0x23857Cu) { return; }
    }
    ctx->pc = 0x23857Cu;
label_23857c:
    // 0x23857c: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x23857cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x238580: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x238580u;
    {
        const bool branch_taken_0x238580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x238580) {
            ctx->pc = 0x23858Cu;
            goto label_23858c;
        }
    }
    ctx->pc = 0x238588u;
    // 0x238588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23858c:
    // 0x23858c: 0x0  nop
    ctx->pc = 0x23858cu;
    // NOP
    // 0x238590: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x238590u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x238594: 0x257182a  slt         $v1, $s2, $s7
    ctx->pc = 0x238594u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x238598: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x238598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x23859c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x23859Cu;
    {
        const bool branch_taken_0x23859c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2385A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23859Cu;
            // 0x2385a0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23859c) {
            ctx->pc = 0x238564u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238564;
        }
    }
    ctx->pc = 0x2385A4u;
label_2385a4:
    // 0x2385a4: 0x0  nop
    ctx->pc = 0x2385a4u;
    // NOP
    // 0x2385a8: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x2385a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x2385ac: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x2385acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2385b0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2385b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2385b4: 0x8e8400d0  lw          $a0, 0xD0($s4)
    ctx->pc = 0x2385b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x2385b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2385b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2385bc: 0x8e8700d4  lw          $a3, 0xD4($s4)
    ctx->pc = 0x2385bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x2385c0: 0x14c5000c  bne         $a2, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2385C0u;
    {
        const bool branch_taken_0x2385c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x2385C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2385C0u;
            // 0x2385c4: 0x751818  mult        $v1, $v1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385c0) {
            ctx->pc = 0x2385F4u;
            goto label_2385f4;
        }
    }
    ctx->pc = 0x2385C8u;
    // 0x2385c8: 0x10e000d6  beqz        $a3, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2385C8u;
    {
        const bool branch_taken_0x2385c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2385c8) {
            ctx->pc = 0x238924u;
            goto label_238924;
        }
    }
    ctx->pc = 0x2385D0u;
    // 0x2385d0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2385D0u;
    {
        const bool branch_taken_0x2385d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2385d0) {
            ctx->pc = 0x2385E0u;
            goto label_2385e0;
        }
    }
    ctx->pc = 0x2385D8u;
    // 0x2385d8: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x2385D8u;
    {
        const bool branch_taken_0x2385d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2385DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2385D8u;
            // 0x2385dc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385d8) {
            ctx->pc = 0x238928u;
            goto label_238928;
        }
    }
    ctx->pc = 0x2385E0u;
label_2385e0:
    // 0x2385e0: 0x84e60002  lh          $a2, 0x2($a3)
    ctx->pc = 0x2385e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2385e4: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x2385e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x2385e8: 0x14c50002  bne         $a2, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2385E8u;
    {
        const bool branch_taken_0x2385e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x2385e8) {
            ctx->pc = 0x2385F4u;
            goto label_2385f4;
        }
    }
    ctx->pc = 0x2385F0u;
    // 0x2385f0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2385f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2385f4:
    // 0x2385f4: 0x878595ec  lh          $a1, -0x6A14($gp)
    ctx->pc = 0x2385f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940140)));
    // 0x2385f8: 0x2ca1000b  sltiu       $at, $a1, 0xB
    ctx->pc = 0x2385f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2385fc: 0x102000c1  beqz        $at, . + 4 + (0xC1 << 2)
    ctx->pc = 0x2385FCu;
    {
        const bool branch_taken_0x2385fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2385fc) {
            ctx->pc = 0x238904u;
            goto label_238904;
        }
    }
    ctx->pc = 0x238604u;
    // 0x238604: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x238604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x238608: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x238608u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23860c: 0x24c6abb0  addiu       $a2, $a2, -0x5450
    ctx->pc = 0x23860cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945712));
    // 0x238610: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x238610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x238614: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x238614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x238618: 0xa00008  jr          $a1
    ctx->pc = 0x238618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238620u: goto label_238620;
            case 0x23866Cu: goto label_23866c;
            case 0x2386B8u: goto label_2386b8;
            case 0x238850u: goto label_238850;
            case 0x23887Cu: goto label_23887c;
            case 0x2388E4u: goto label_2388e4;
            case 0x238904u: goto label_238904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238620u;
label_238620:
    // 0x238620: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x238620u;
    {
        const bool branch_taken_0x238620 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x238624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238620u;
            // 0x238624: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238620) {
            ctx->pc = 0x238658u;
            goto label_238658;
        }
    }
    ctx->pc = 0x238628u;
    // 0x238628: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x238628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23862c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x23862cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x238630: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x238630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x238634: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x238634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x238638: 0x24e7003e  addiu       $a3, $a3, 0x3E
    ctx->pc = 0x238638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 62));
    // 0x23863c: 0x24c6ffe2  addiu       $a2, $a2, -0x1E
    ctx->pc = 0x23863cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967266));
    // 0x238640: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x238640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x238644: 0xafa6009c  sw          $a2, 0x9C($sp)
    ctx->pc = 0x238644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 6));
    // 0x238648: 0xae2501a8  sw          $a1, 0x1A8($s1)
    ctx->pc = 0x238648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 5));
    // 0x23864c: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x23864Cu;
    {
        const bool branch_taken_0x23864c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23864Cu;
            // 0x238650: 0xae2301ac  sw          $v1, 0x1AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23864c) {
            ctx->pc = 0x238904u;
            goto label_238904;
        }
    }
    ctx->pc = 0x238654u;
    // 0x238654: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x238654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_238658:
    // 0x238658: 0xae2301a8  sw          $v1, 0x1A8($s1)
    ctx->pc = 0x238658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 3));
    // 0x23865c: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x23865cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x238660: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x238660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x238664: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x238664u;
    {
        const bool branch_taken_0x238664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238664u;
            // 0x238668: 0xafa3009c  sw          $v1, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238664) {
            ctx->pc = 0x238904u;
            goto label_238904;
        }
    }
    ctx->pc = 0x23866Cu;
label_23866c:
    // 0x23866c: 0x8ec90004  lw          $t1, 0x4($s6)
    ctx->pc = 0x23866cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x238670: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x238670u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x238674: 0x8f8894f8  lw          $t0, -0x6B08($gp)
    ctx->pc = 0x238674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x238678: 0x2787836c  addiu       $a3, $gp, -0x7C94
    ctx->pc = 0x238678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935404));
    // 0x23867c: 0x27868370  addiu       $a2, $gp, -0x7C90
    ctx->pc = 0x23867cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935408));
    // 0x238680: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x238680u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x238684: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x238684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x238688: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x238688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x23868c: 0x8d030070  lw          $v1, 0x70($t0)
    ctx->pc = 0x23868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 112)));
    // 0x238690: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x238690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x238694: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x238694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x238698: 0x80e60000  lb          $a2, 0x0($a3)
    ctx->pc = 0x238698u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23869c: 0xae2601a8  sw          $a2, 0x1A8($s1)
    ctx->pc = 0x23869cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 6));
    // 0x2386a0: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x2386a0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2386a4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2386a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2386a8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2386a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2386ac: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x2386acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x2386b0: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x2386B0u;
    {
        const bool branch_taken_0x2386b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2386B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2386B0u;
            // 0x2386b4: 0xae2501ac  sw          $a1, 0x1AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386b0) {
            ctx->pc = 0x238904u;
            goto label_238904;
        }
    }
    ctx->pc = 0x2386B8u;
label_2386b8:
    // 0x2386b8: 0x11000017  beqz        $t0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2386B8u;
    {
        const bool branch_taken_0x2386b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2386b8) {
            ctx->pc = 0x238718u;
            goto label_238718;
        }
    }
    ctx->pc = 0x2386C0u;
    // 0x2386c0: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x2386c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2386c4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2386c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2386c8: 0x24a5ffe2  addiu       $a1, $a1, -0x1E
    ctx->pc = 0x2386c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967266));
    // 0x2386cc: 0xafa5009c  sw          $a1, 0x9C($sp)
    ctx->pc = 0x2386ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 5));
    // 0x2386d0: 0xae2301ac  sw          $v1, 0x1AC($s1)
    ctx->pc = 0x2386d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 3));
    // 0x2386d4: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x2386d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2386d8: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x2386d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2386dc: 0x2463ff6a  addiu       $v1, $v1, -0x96
    ctx->pc = 0x2386dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967146));
    // 0x2386e0: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x2386e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2386e4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2386E4u;
    {
        const bool branch_taken_0x2386e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2386E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2386E4u;
            // 0x2386e8: 0x24c50032  addiu       $a1, $a2, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386e4) {
            ctx->pc = 0x238708u;
            goto label_238708;
        }
    }
    ctx->pc = 0x2386ECu;
    // 0x2386ec: 0x2605002e  addiu       $a1, $s0, 0x2E
    ctx->pc = 0x2386ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 46));
    // 0x2386f0: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x2386f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2386f4: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x2386f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2386f8: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x2386f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x2386fc: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2386FCu;
    {
        const bool branch_taken_0x2386fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2386FCu;
            // 0x238700: 0xae2301a8  sw          $v1, 0x1A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386fc) {
            ctx->pc = 0x238904u;
            goto label_238904;
        }
    }
    ctx->pc = 0x238704u;
    // 0x238704: 0x24c50032  addiu       $a1, $a2, 0x32
    ctx->pc = 0x238704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 50));
label_238708:
    // 0x238708: 0x2403ffe2  addiu       $v1, $zero, -0x1E
    ctx->pc = 0x238708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x23870c: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x23870cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x238710: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x238710u;
    {
        const bool branch_taken_0x238710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238710u;
            // 0x238714: 0xae2301a8  sw          $v1, 0x1A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238710) {
            ctx->pc = 0x238904u;
            goto label_238904;
        }
    }
    ctx->pc = 0x238718u;
label_238718:
    // 0x238718: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x238718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23871c: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x23871cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x238720: 0x24c6ffee  addiu       $a2, $a2, -0x12
    ctx->pc = 0x238720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967278));
    // 0x238724: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x238724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
    // 0x238728: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x238728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23872c: 0x24c6001c  addiu       $a2, $a2, 0x1C
    ctx->pc = 0x23872cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x238730: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x238730u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x238734: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x238734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x238738: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x238738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x23873c: 0x28c10133  slti        $at, $a2, 0x133
    ctx->pc = 0x23873cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)307) ? 1 : 0);
    // 0x238740: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x238740u;
    {
        const bool branch_taken_0x238740 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x238740) {
            ctx->pc = 0x238760u;
            goto label_238760;
        }
    }
    ctx->pc = 0x238748u;
    // 0x238748: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x238748u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x23874c: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x23874cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x238750: 0x24e7ffa2  addiu       $a3, $a3, -0x5E
    ctx->pc = 0x238750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967202));
    // 0x238754: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x238754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x238758: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x238758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x23875c: 0xae2601ac  sw          $a2, 0x1AC($s1)
    ctx->pc = 0x23875cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 6));
label_238760:
    // 0x238760: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x238760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x238764: 0x28c10014  slti        $at, $a2, 0x14
    ctx->pc = 0x238764u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x238768: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x238768u;
    {
        const bool branch_taken_0x238768 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x238768) {
            ctx->pc = 0x238818u;
            goto label_238818;
        }
    }
    ctx->pc = 0x238770u;
    // 0x238770: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x238770u;
    {
        const bool branch_taken_0x238770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238770) {
            ctx->pc = 0x238784u;
            goto label_238784;
        }
    }
    ctx->pc = 0x238778u;
label_238778:
    // 0x238778: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x238778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23877c: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x23877cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x238780: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x238780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
label_238784:
    // 0x238784: 0x0  nop
    ctx->pc = 0x238784u;
    // NOP
    // 0x238788: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x238788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23878c: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x23878cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x238790: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x238790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x238794: 0x24c6001a  addiu       $a2, $a2, 0x1A
    ctx->pc = 0x238794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26));
    // 0x238798: 0xe6302a  slt         $a2, $a3, $a2
    ctx->pc = 0x238798u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x23879c: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x23879Cu;
    {
        const bool branch_taken_0x23879c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x23879c) {
            ctx->pc = 0x238778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238778;
        }
    }
    ctx->pc = 0x2387A4u;
    // 0x2387a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2387A4u;
    {
        const bool branch_taken_0x2387a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2387a4) {
            ctx->pc = 0x2387B8u;
            goto label_2387b8;
        }
    }
    ctx->pc = 0x2387ACu;
label_2387ac:
    // 0x2387ac: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2387acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2387b0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2387b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2387b4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x2387b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_2387b8:
    // 0x2387b8: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x2387b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2387bc: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x2387bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2387c0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2387c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2387c4: 0x24c60032  addiu       $a2, $a2, 0x32
    ctx->pc = 0x2387c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 50));
    // 0x2387c8: 0xe6302a  slt         $a2, $a3, $a2
    ctx->pc = 0x2387c8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2387cc: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2387CCu;
    {
        const bool branch_taken_0x2387cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2387cc) {
            ctx->pc = 0x2387ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2387ac;
        }
    }
    ctx->pc = 0x2387D4u;
    // 0x2387d4: 0x2606001e  addiu       $a2, $s0, 0x1E
    ctx->pc = 0x2387d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 30));
    // 0x2387d8: 0x2463fff2  addiu       $v1, $v1, -0xE
    ctx->pc = 0x2387d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967282));
    // 0x2387dc: 0xae2601a8  sw          $a2, 0x1A8($s1)
    ctx->pc = 0x2387dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 6));
    // 0x2387e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2387E0u;
    {
        const bool branch_taken_0x2387e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2387E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2387E0u;
            // 0x2387e4: 0xae2301ac  sw          $v1, 0x1AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2387e0) {
            ctx->pc = 0x238800u;
            goto label_238800;
        }
    }
    ctx->pc = 0x2387E8u;
label_2387e8:
    // 0x2387e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2387e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2387ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2387ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2387f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2387f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2387f4: 0x8e2301ac  lw          $v1, 0x1AC($s1)
    ctx->pc = 0x2387f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x2387f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2387f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2387fc: 0xae2301ac  sw          $v1, 0x1AC($s1)
    ctx->pc = 0x2387fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 3));
label_238800:
    // 0x238800: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x238800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x238804: 0x28630014  slti        $v1, $v1, 0x14
    ctx->pc = 0x238804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x238808: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x238808u;
    {
        const bool branch_taken_0x238808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238808) {
            ctx->pc = 0x2387E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2387e8;
        }
    }
    ctx->pc = 0x238810u;
    // 0x238810: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x238810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x238814: 0xaf8395fc  sw          $v1, -0x6A04($gp)
    ctx->pc = 0x238814u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940156), GPR_U32(ctx, 3));
label_238818:
    // 0x238818: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x238818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23881c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x23881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x238820: 0x286101e5  slti        $at, $v1, 0x1E5
    ctx->pc = 0x238820u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)485) ? 1 : 0);
    // 0x238824: 0x14200037  bnez        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x238824u;
    {
        const bool branch_taken_0x238824 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x238824) {
            ctx->pc = 0x238904u;
            goto label_238904;
        }
    }
    ctx->pc = 0x23882Cu;
    // 0x23882c: 0x240301d0  addiu       $v1, $zero, 0x1D0
    ctx->pc = 0x23882cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x238830: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x238830u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x238834: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x238834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x238838: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x238838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x23883c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x23883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x238840: 0x24a5001a  addiu       $a1, $a1, 0x1A
    ctx->pc = 0x238840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26));
    // 0x238844: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x238844u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x238848: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x238848u;
    {
        const bool branch_taken_0x238848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23884Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238848u;
            // 0x23884c: 0xae2301a8  sw          $v1, 0x1A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238848) {
            ctx->pc = 0x238904u;
            goto label_238904;
        }
    }
    ctx->pc = 0x238850u;
label_238850:
    // 0x238850: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x238850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x238854: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x238854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x238858: 0xae2501a8  sw          $a1, 0x1A8($s1)
    ctx->pc = 0x238858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 5));
    // 0x23885c: 0xae2301ac  sw          $v1, 0x1AC($s1)
    ctx->pc = 0x23885cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 3));
    // 0x238860: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x238860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x238864: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x238864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x238868: 0x24a5003c  addiu       $a1, $a1, 0x3C
    ctx->pc = 0x238868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x23886c: 0x2463ff88  addiu       $v1, $v1, -0x78
    ctx->pc = 0x23886cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x238870: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x238870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x238874: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x238874u;
    {
        const bool branch_taken_0x238874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238874u;
            // 0x238878: 0xafa3009c  sw          $v1, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238874) {
            ctx->pc = 0x238904u;
            goto label_238904;
        }
    }
    ctx->pc = 0x23887Cu;
label_23887c:
    // 0x23887c: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x23887cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x238880: 0x2407ffd8  addiu       $a3, $zero, -0x28
    ctx->pc = 0x238880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x238884: 0x8fa8009c  lw          $t0, 0x9C($sp)
    ctx->pc = 0x238884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x238888: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x238888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x23888c: 0x2606006a  addiu       $a2, $s0, 0x6A
    ctx->pc = 0x23888cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 106));
    // 0x238890: 0x2605006c  addiu       $a1, $s0, 0x6C
    ctx->pc = 0x238890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x238894: 0x2529004a  addiu       $t1, $t1, 0x4A
    ctx->pc = 0x238894u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 74));
    // 0x238898: 0x2508ffc0  addiu       $t0, $t0, -0x40
    ctx->pc = 0x238898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967232));
    // 0x23889c: 0xafa90098  sw          $t1, 0x98($sp)
    ctx->pc = 0x23889cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 9));
    // 0x2388a0: 0xafa8009c  sw          $t0, 0x9C($sp)
    ctx->pc = 0x2388a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 8));
    // 0x2388a4: 0xae2701a8  sw          $a3, 0x1A8($s1)
    ctx->pc = 0x2388a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 7));
    // 0x2388a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2388A8u;
    {
        const bool branch_taken_0x2388a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2388ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2388A8u;
            // 0x2388ac: 0xae2301ac  sw          $v1, 0x1AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2388a8) {
            ctx->pc = 0x2388C8u;
            goto label_2388c8;
        }
    }
    ctx->pc = 0x2388B0u;
label_2388b0:
    // 0x2388b0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2388b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2388b4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2388b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2388b8: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x2388b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x2388bc: 0x8e2301a8  lw          $v1, 0x1A8($s1)
    ctx->pc = 0x2388bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x2388c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2388c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2388c4: 0xae2301a8  sw          $v1, 0x1A8($s1)
    ctx->pc = 0x2388c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 3));
label_2388c8:
    // 0x2388c8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2388c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2388cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2388ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2388d0: 0x286101d7  slti        $at, $v1, 0x1D7
    ctx->pc = 0x2388d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)471) ? 1 : 0);
    // 0x2388d4: 0x1020fff6  beqz        $at, . + 4 + (-0xA << 2)
    ctx->pc = 0x2388D4u;
    {
        const bool branch_taken_0x2388d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2388d4) {
            ctx->pc = 0x2388B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2388b0;
        }
    }
    ctx->pc = 0x2388DCu;
    // 0x2388dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2388DCu;
    {
        const bool branch_taken_0x2388dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2388dc) {
            ctx->pc = 0x238904u;
            goto label_238904;
        }
    }
    ctx->pc = 0x2388E4u;
label_2388e4:
    // 0x2388e4: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x2388e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2388e8: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x2388e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2388ec: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x2388ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2388f0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2388f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2388f4: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x2388f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2388f8: 0xafa6009c  sw          $a2, 0x9C($sp)
    ctx->pc = 0x2388f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 6));
    // 0x2388fc: 0xae2501a8  sw          $a1, 0x1A8($s1)
    ctx->pc = 0x2388fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 5));
    // 0x238900: 0xae2301ac  sw          $v1, 0x1AC($s1)
    ctx->pc = 0x238900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 3));
label_238904:
    // 0x238904: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x238904u;
    {
        const bool branch_taken_0x238904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x238904) {
            ctx->pc = 0x238924u;
            goto label_238924;
        }
    }
    ctx->pc = 0x23890Cu;
    // 0x23890c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x23890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238910: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x238914: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x238914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x238918: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x238918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23891c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23891cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x238920: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x238920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_238924:
    // 0x238924: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x238924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_238928:
    // 0x238928: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x238928u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23892c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23892cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238930: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x238930u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238934: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x238934u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238938: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x238938u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23893c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23893cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238948: 0x3e00008  jr          $ra
    ctx->pc = 0x238948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23894Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238948u;
            // 0x23894c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238950u;
}
