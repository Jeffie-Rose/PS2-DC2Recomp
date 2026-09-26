#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateVertexWeight__18mgCVisualMotionMDTFPUiiP9mgCMemory
// Address: 0x2894b0 - 0x289850
void CreateVertexWeight__18mgCVisualMotionMDTFPUiiP9mgCMemory_0x2894b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateVertexWeight__18mgCVisualMotionMDTFPUiiP9mgCMemory_0x2894b0");
#endif

    switch (ctx->pc) {
        case 0x289510u: goto label_289510;
        case 0x289520u: goto label_289520;
        case 0x28953cu: goto label_28953c;
        case 0x28955cu: goto label_28955c;
        case 0x289590u: goto label_289590;
        case 0x2895d0u: goto label_2895d0;
        case 0x2895dcu: goto label_2895dc;
        case 0x28963cu: goto label_28963c;
        case 0x289664u: goto label_289664;
        case 0x289740u: goto label_289740;
        case 0x289788u: goto label_289788;
        default: break;
    }

    ctx->pc = 0x2894b0u;

    // 0x2894b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2894b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2894b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2894b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2894b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2894b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2894bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2894bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2894c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2894c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2894c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2894c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2894c8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2894c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2894cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2894ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2894d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2894d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2894d4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2894d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2894d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2894d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2894dc: 0xac820100  sw          $v0, 0x100($a0)
    ctx->pc = 0x2894dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
    // 0x2894e0: 0x8c910100  lw          $s1, 0x100($a0)
    ctx->pc = 0x2894e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x2894e4: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x2894e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x2894e8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2894e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2894ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2894ECu;
    {
        const bool branch_taken_0x2894ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2894F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2894ECu;
            // 0x2894f0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894ec) {
            ctx->pc = 0x289500u;
            goto label_289500;
        }
    }
    ctx->pc = 0x2894F4u;
    // 0x2894f4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2894f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2894f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2894F8u;
    {
        const bool branch_taken_0x2894f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2894FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2894F8u;
            // 0x2894fc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894f8) {
            ctx->pc = 0x289504u;
            goto label_289504;
        }
    }
    ctx->pc = 0x289500u;
label_289500:
    // 0x289500: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x289500u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_289504:
    // 0x289504: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x289504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x289508: 0xc04e748  jal         func_139D20
    ctx->pc = 0x289508u;
    SET_GPR_U32(ctx, 31, 0x289510u);
    ctx->pc = 0x28950Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289508u;
            // 0x28950c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289510u; }
        if (ctx->pc != 0x289510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289510u; }
        if (ctx->pc != 0x289510u) { return; }
    }
    ctx->pc = 0x289510u;
label_289510:
    // 0x289510: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x289510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x289514: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x289514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289518: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x289518u;
    SET_GPR_U32(ctx, 31, 0x289520u);
    ctx->pc = 0x28951Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289518u;
            // 0x28951c: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289520u; }
        if (ctx->pc != 0x289520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289520u; }
        if (ctx->pc != 0x289520u) { return; }
    }
    ctx->pc = 0x289520u;
label_289520:
    // 0x289520: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x289520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x289524: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x289524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28952c: 0x24a59850  addiu       $a1, $a1, -0x67B0
    ctx->pc = 0x28952cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940752));
    // 0x289530: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x289530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289534: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x289534u;
    SET_GPR_U32(ctx, 31, 0x28953Cu);
    ctx->pc = 0x289538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289534u;
            // 0x289538: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28953Cu; }
        if (ctx->pc != 0x28953Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28953Cu; }
        if (ctx->pc != 0x28953Cu) { return; }
    }
    ctx->pc = 0x28953Cu;
label_28953c:
    // 0x28953c: 0xae820104  sw          $v0, 0x104($s4)
    ctx->pc = 0x28953cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 2));
    // 0x289540: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x289540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x289544: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x289544u;
    {
        const bool branch_taken_0x289544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289544u;
            // 0x289548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289544) {
            ctx->pc = 0x289554u;
            goto label_289554;
        }
    }
    ctx->pc = 0x28954Cu;
    // 0x28954c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x28954Cu;
    {
        const bool branch_taken_0x28954c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28954Cu;
            // 0x289550: 0xae800100  sw          $zero, 0x100($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28954c) {
            ctx->pc = 0x289830u;
            goto label_289830;
        }
    }
    ctx->pc = 0x289554u;
label_289554:
    // 0x289554: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x289554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289558: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x289558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28955c:
    // 0x28955c: 0x2863821  addu        $a3, $s4, $a2
    ctx->pc = 0x28955cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x289560: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x289560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x289564: 0xace40080  sw          $a0, 0x80($a3)
    ctx->pc = 0x289564u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 4));
    // 0x289568: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x289568u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x28956c: 0xace40084  sw          $a0, 0x84($a3)
    ctx->pc = 0x28956cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 4));
    // 0x289570: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x289570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x289574: 0xace40088  sw          $a0, 0x88($a3)
    ctx->pc = 0x289574u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 136), GPR_U32(ctx, 4));
    // 0x289578: 0xace4008c  sw          $a0, 0x8C($a3)
    ctx->pc = 0x289578u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 140), GPR_U32(ctx, 4));
    // 0x28957c: 0xace40090  sw          $a0, 0x90($a3)
    ctx->pc = 0x28957cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 4));
    // 0x289580: 0xace40094  sw          $a0, 0x94($a3)
    ctx->pc = 0x289580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 4));
    // 0x289584: 0xace40098  sw          $a0, 0x98($a3)
    ctx->pc = 0x289584u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 4));
    // 0x289588: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x289588u;
    {
        const bool branch_taken_0x289588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289588u;
            // 0x28958c: 0xace4009c  sw          $a0, 0x9C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289588) {
            ctx->pc = 0x28955Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28955c;
        }
    }
    ctx->pc = 0x289590u;
label_289590:
    // 0x289590: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x289590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289594: 0x14730004  bne         $v1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x289594u;
    {
        const bool branch_taken_0x289594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x289598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289594u;
            // 0x289598: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289594) {
            ctx->pc = 0x2895A8u;
            goto label_2895a8;
        }
    }
    ctx->pc = 0x28959Cu;
    // 0x28959c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x28959cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2895a0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2895A0u;
    {
        const bool branch_taken_0x2895a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2895a0) {
            ctx->pc = 0x2895C4u;
            goto label_2895c4;
        }
    }
    ctx->pc = 0x2895A8u;
label_2895a8:
    // 0x2895a8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2895a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2895ac: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2895acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2895b0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2895b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2895b4: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x2895B4u;
    {
        const bool branch_taken_0x2895b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2895B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2895B4u;
            // 0x2895b8: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895b4) {
            ctx->pc = 0x28976Cu;
            goto label_28976c;
        }
    }
    ctx->pc = 0x2895BCu;
    // 0x2895bc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x2895BCu;
    {
        const bool branch_taken_0x2895bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2895C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2895BCu;
            // 0x2895c0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895bc) {
            ctx->pc = 0x289590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289590;
        }
    }
    ctx->pc = 0x2895C4u;
label_2895c4:
    // 0x2895c4: 0x0  nop
    ctx->pc = 0x2895c4u;
    // NOP
    // 0x2895c8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2895C8u;
    {
        const bool branch_taken_0x2895c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2895CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2895C8u;
            // 0x2895cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895c8) {
            ctx->pc = 0x289748u;
            goto label_289748;
        }
    }
    ctx->pc = 0x2895D0u;
label_2895d0:
    // 0x2895d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2895d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2895d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895d8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2895d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2895dc:
    // 0x2895dc: 0x0  nop
    ctx->pc = 0x2895dcu;
    // NOP
    // 0x2895e0: 0x2861821  addu        $v1, $s4, $a2
    ctx->pc = 0x2895e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x2895e4: 0x8c670080  lw          $a3, 0x80($v1)
    ctx->pc = 0x2895e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2895e8: 0x14e40006  bne         $a3, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2895E8u;
    {
        const bool branch_taken_0x2895e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x2895e8) {
            ctx->pc = 0x289604u;
            goto label_289604;
        }
    }
    ctx->pc = 0x2895F0u;
    // 0x2895f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2895f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2895f4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2895f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2895f8: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2895f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2895fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2895FCu;
    {
        const bool branch_taken_0x2895fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2895FCu;
            // 0x289600: 0xac640080  sw          $a0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895fc) {
            ctx->pc = 0x289624u;
            goto label_289624;
        }
    }
    ctx->pc = 0x289604u;
label_289604:
    // 0x289604: 0x0  nop
    ctx->pc = 0x289604u;
    // NOP
    // 0x289608: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x289608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28960c: 0x10e30005  beq         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28960Cu;
    {
        const bool branch_taken_0x28960c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x28960c) {
            ctx->pc = 0x289624u;
            goto label_289624;
        }
    }
    ctx->pc = 0x289614u;
    // 0x289614: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x289614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x289618: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x289618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x28961c: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x28961Cu;
    {
        const bool branch_taken_0x28961c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28961Cu;
            // 0x289620: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28961c) {
            ctx->pc = 0x2895DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2895dc;
        }
    }
    ctx->pc = 0x289624u;
label_289624:
    // 0x289624: 0x0  nop
    ctx->pc = 0x289624u;
    // NOP
    // 0x289628: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x289628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x28962c: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28962Cu;
    {
        const bool branch_taken_0x28962c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x289630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28962Cu;
            // 0x289630: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28962c) {
            ctx->pc = 0x289648u;
            goto label_289648;
        }
    }
    ctx->pc = 0x289634u;
    // 0x289634: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x289634u;
    SET_GPR_U32(ctx, 31, 0x28963Cu);
    ctx->pc = 0x289638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289634u;
            // 0x289638: 0x2484d5f0  addiu       $a0, $a0, -0x2A10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28963Cu; }
        if (ctx->pc != 0x28963Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28963Cu; }
        if (ctx->pc != 0x28963Cu) { return; }
    }
    ctx->pc = 0x28963Cu;
label_28963c:
    // 0x28963c: 0xae800104  sw          $zero, 0x104($s4)
    ctx->pc = 0x28963cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 0));
    // 0x289640: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x289640u;
    {
        const bool branch_taken_0x289640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289640u;
            // 0x289644: 0xae800100  sw          $zero, 0x100($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289640) {
            ctx->pc = 0x289830u;
            goto label_289830;
        }
    }
    ctx->pc = 0x289648u;
label_289648:
    // 0x289648: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x289648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28964c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28964cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289650: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x289650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x289654: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x289654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289658: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x289658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x28965c: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x28965cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x289660: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x289660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_289664:
    // 0x289664: 0x0  nop
    ctx->pc = 0x289664u;
    // NOP
    // 0x289668: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x289668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x28966c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x28966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289670: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x289670u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289674: 0x0  nop
    ctx->pc = 0x289674u;
    // NOP
    // 0x289678: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x289678u;
    {
        const bool branch_taken_0x289678 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28967Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289678u;
            // 0x28967c: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289678) {
            ctx->pc = 0x2896B0u;
            goto label_2896b0;
        }
    }
    ctx->pc = 0x289680u;
    // 0x289680: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x289680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x289684: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x289684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x289688: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x289688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x28968c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x28968cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x289690: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x289690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289694: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x289694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289698: 0x0  nop
    ctx->pc = 0x289698u;
    // NOP
    // 0x28969c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x28969cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2896a0: 0x0  nop
    ctx->pc = 0x2896a0u;
    // NOP
    // 0x2896a4: 0x0  nop
    ctx->pc = 0x2896a4u;
    // NOP
    // 0x2896a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2896A8u;
    {
        const bool branch_taken_0x2896a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2896ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2896A8u;
            // 0x2896ac: 0xe4a00010  swc1        $f0, 0x10($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2896a8) {
            ctx->pc = 0x2896C0u;
            goto label_2896c0;
        }
    }
    ctx->pc = 0x2896B0u;
label_2896b0:
    // 0x2896b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2896b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2896b4: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x2896b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2896b8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2896B8u;
    {
        const bool branch_taken_0x2896b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2896BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2896B8u;
            // 0x2896bc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2896b8) {
            ctx->pc = 0x289664u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289664;
        }
    }
    ctx->pc = 0x2896C0u;
label_2896c0:
    // 0x2896c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2896c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2896c4: 0x14e3001e  bne         $a3, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2896C4u;
    {
        const bool branch_taken_0x2896c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x2896c4) {
            ctx->pc = 0x289740u;
            goto label_289740;
        }
    }
    ctx->pc = 0x2896CCu;
    // 0x2896cc: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x2896ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2896d0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2896d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2896d4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2896d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2896d8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2896d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2896dc: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x2896dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2896e0: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x2896e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2896e4: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x2896e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2896e8: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x2896e8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2896ec: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2896ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2896f0: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2896f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2896f4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2896f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2896f8: 0x46041803  div.s       $f0, $f3, $f4
    ctx->pc = 0x2896f8u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x2896fc: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x2896fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x289700: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x289700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289704: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x289704u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x289708: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x289708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x28970c: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x28970cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289710: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x289710u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x289714: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x289714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x289718: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x289718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28971c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x28971cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x289720: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x289720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x289724: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x289724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x289728: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x289728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28972c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28972cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x289730: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x289730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289734: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x289734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x289738: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x289738u;
    SET_GPR_U32(ctx, 31, 0x289740u);
    ctx->pc = 0x28973Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289738u;
            // 0x28973c: 0x2484d610  addiu       $a0, $a0, -0x29F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289740u; }
        if (ctx->pc != 0x289740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289740u; }
        if (ctx->pc != 0x289740u) { return; }
    }
    ctx->pc = 0x289740u;
label_289740:
    // 0x289740: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x289740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x289744: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x289744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_289748:
    // 0x289748: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x289748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28974c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x28974cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x289750: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
    ctx->pc = 0x289750u;
    {
        const bool branch_taken_0x289750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289750) {
            ctx->pc = 0x2895D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2895d0;
        }
    }
    ctx->pc = 0x289758u;
    // 0x289758: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x289758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x28975c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28975Cu;
    {
        const bool branch_taken_0x28975c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28975Cu;
            // 0x289760: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28975c) {
            ctx->pc = 0x28976Cu;
            goto label_28976c;
        }
    }
    ctx->pc = 0x289764u;
    // 0x289764: 0x1000ff8a  b           . + 4 + (-0x76 << 2)
    ctx->pc = 0x289764u;
    {
        const bool branch_taken_0x289764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289764) {
            ctx->pc = 0x289590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289590;
        }
    }
    ctx->pc = 0x28976Cu;
label_28976c:
    // 0x28976c: 0x0  nop
    ctx->pc = 0x28976cu;
    // NOP
    // 0x289770: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x289770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x289774: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x289774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28977c: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x28977cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x289780: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x289780u;
    {
        const bool branch_taken_0x289780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289780u;
            // 0x289784: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289780) {
            ctx->pc = 0x289820u;
            goto label_289820;
        }
    }
    ctx->pc = 0x289788u;
label_289788:
    // 0x289788: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x289788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x28978c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x28978cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x289790: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x289790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x289794: 0xc4630014  lwc1        $f3, 0x14($v1)
    ctx->pc = 0x289794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x289798: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x289798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28979c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x28979cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2897a0: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x2897a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2897a4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2897a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2897a8: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x2897a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2897ac: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x2897acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2897b0: 0x0  nop
    ctx->pc = 0x2897b0u;
    // NOP
    // 0x2897b4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2897B4u;
    {
        const bool branch_taken_0x2897b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2897b4) {
            ctx->pc = 0x289800u;
            goto label_289800;
        }
    }
    ctx->pc = 0x2897BCu;
    // 0x2897bc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2897bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2897c0: 0x0  nop
    ctx->pc = 0x2897c0u;
    // NOP
    // 0x2897c4: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x2897C4u;
    {
        const bool branch_taken_0x2897c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2897c4) {
            ctx->pc = 0x289800u;
            goto label_289800;
        }
    }
    ctx->pc = 0x2897CCu;
    // 0x2897cc: 0x0  nop
    ctx->pc = 0x2897ccu;
    // NOP
    // 0x2897d0: 0x0  nop
    ctx->pc = 0x2897d0u;
    // NOP
    // 0x2897d4: 0x46022003  div.s       $f0, $f4, $f2
    ctx->pc = 0x2897d4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x2897d8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2897d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2897dc: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2897dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2897e0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2897e0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2897e4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2897e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2897e8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2897e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2897ec: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2897ecu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2897f0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2897f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2897f4: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x2897f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2897f8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2897f8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2897fc: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x2897fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_289800:
    // 0x289800: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x289800u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289804: 0x0  nop
    ctx->pc = 0x289804u;
    // NOP
    // 0x289808: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x289808u;
    {
        const bool branch_taken_0x289808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289808) {
            ctx->pc = 0x289814u;
            goto label_289814;
        }
    }
    ctx->pc = 0x289810u;
    // 0x289810: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x289810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_289814:
    // 0x289814: 0x0  nop
    ctx->pc = 0x289814u;
    // NOP
    // 0x289818: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x289818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x28981c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28981cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_289820:
    // 0x289820: 0x8e830100  lw          $v1, 0x100($s4)
    ctx->pc = 0x289820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x289824: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x289824u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x289828: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x289828u;
    {
        const bool branch_taken_0x289828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289828) {
            ctx->pc = 0x289788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289788;
        }
    }
    ctx->pc = 0x289830u;
label_289830:
    // 0x289830: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x289830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x289834: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x289834u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289838: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x289838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28983c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28983cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289840: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x289840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289844: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x289844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289848: 0x3e00008  jr          $ra
    ctx->pc = 0x289848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28984Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289848u;
            // 0x28984c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289850u;
}
