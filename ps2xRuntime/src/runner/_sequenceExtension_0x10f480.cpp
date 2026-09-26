#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sequenceExtension
// Address: 0x10f480 - 0x10f5b0
void _sequenceExtension_0x10f480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sequenceExtension_0x10f480");
#endif

    switch (ctx->pc) {
        case 0x10f4b4u: goto label_10f4b4;
        case 0x10f4c0u: goto label_10f4c0;
        case 0x10f4fcu: goto label_10f4fc;
        case 0x10f518u: goto label_10f518;
        case 0x10f544u: goto label_10f544;
        default: break;
    }

    ctx->pc = 0x10f480u;

    // 0x10f480: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10f480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10f484: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10f484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10f488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f48c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10f48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f490: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10f490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10f494: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10f494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f498: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10f498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10f49c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10f49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4a0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10f4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10f4a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10f4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10f4a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10f4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10f4ac: 0xc042656  jal         func_109958
    ctx->pc = 0x10F4ACu;
    SET_GPR_U32(ctx, 31, 0x10F4B4u);
    ctx->pc = 0x10F4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F4ACu;
            // 0x10f4b0: 0xae300848  sw          $s0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109958u;
    if (runtime->hasFunction(0x109958u)) {
        auto targetFn = runtime->lookupFunction(0x109958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F4B4u; }
        if (ctx->pc != 0x10F4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuSetMPEG1_0x109958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F4B4u; }
        if (ctx->pc != 0x10F4B4u) { return; }
    }
    ctx->pc = 0x10F4B4u;
label_10f4b4:
    // 0x10f4b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4b8: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10F4B8u;
    SET_GPR_U32(ctx, 31, 0x10F4C0u);
    ctx->pc = 0x10F4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F4B8u;
            // 0x10f4bc: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F4C0u; }
        if (ctx->pc != 0x10F4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F4C0u; }
        if (ctx->pc != 0x10F4C0u) { return; }
    }
    ctx->pc = 0x10F4C0u;
label_10f4c0:
    // 0x10f4c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10f4c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4c4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x10f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x10f4c8: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x10f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x10f4cc: 0x30750fff  andi        $s5, $v1, 0xFFF
    ctx->pc = 0x10f4ccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x10f4d0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x10f4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x10f4d4: 0x122342  srl         $a0, $s2, 13
    ctx->pc = 0x10f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
    // 0x10f4d8: 0x121bc2  srl         $v1, $s2, 15
    ctx->pc = 0x10f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 15));
    // 0x10f4dc: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x10f4dcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x10f4e0: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x10f4e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x10f4e4: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F4E4u;
    {
        const bool branch_taken_0x10f4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x10F4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F4E4u;
            // 0x10f4e8: 0xae220140  sw          $v0, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4e4) {
            ctx->pc = 0x10F4FCu;
            goto label_10f4fc;
        }
    }
    ctx->pc = 0x10F4ECu;
    // 0x10f4ec: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x10f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x10f4f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4f4: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10F4F4u;
    SET_GPR_U32(ctx, 31, 0x10F4FCu);
    ctx->pc = 0x10F4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F4F4u;
            // 0x10f4f8: 0x24a50980  addiu       $a1, $a1, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F4FCu; }
        if (ctx->pc != 0x10F4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F4FCu; }
        if (ctx->pc != 0x10F4FCu) { return; }
    }
    ctx->pc = 0x10F4FCu;
label_10f4fc:
    // 0x10f4fc: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x10f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
    // 0x10f500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f504: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10f504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10f508: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x10f508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10f50c: 0xae22013c  sw          $v0, 0x13C($s1)
    ctx->pc = 0x10f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 2));
    // 0x10f510: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10F510u;
    SET_GPR_U32(ctx, 31, 0x10F518u);
    ctx->pc = 0x10F514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F510u;
            // 0x10f514: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F518u; }
        if (ctx->pc != 0x10F518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F518u; }
        if (ctx->pc != 0x10F518u) { return; }
    }
    ctx->pc = 0x10F518u;
label_10f518:
    // 0x10f518: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x10f518u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x10f51c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x10f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x10f520: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10F520u;
    {
        const bool branch_taken_0x10f520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10F524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F520u;
            // 0x10f524: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f520) {
            ctx->pc = 0x10F544u;
            goto label_10f544;
        }
    }
    ctx->pc = 0x10F528u;
    // 0x10f528: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F528u;
    {
        const bool branch_taken_0x10f528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10F52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F528u;
            // 0x10f52c: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f528) {
            ctx->pc = 0x10F544u;
            goto label_10f544;
        }
    }
    ctx->pc = 0x10F530u;
    // 0x10f530: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F530u;
    {
        const bool branch_taken_0x10f530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10F534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F530u;
            // 0x10f534: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f530) {
            ctx->pc = 0x10F544u;
            goto label_10f544;
        }
    }
    ctx->pc = 0x10F538u;
    // 0x10f538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f53c: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10F53Cu;
    SET_GPR_U32(ctx, 31, 0x10F544u);
    ctx->pc = 0x10F540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F53Cu;
            // 0x10f540: 0x24a509a8  addiu       $a1, $a1, 0x9A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F544u; }
        if (ctx->pc != 0x10F544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F544u; }
        if (ctx->pc != 0x10F544u) { return; }
    }
    ctx->pc = 0x10F544u;
label_10f544:
    // 0x10f544: 0x8e240124  lw          $a0, 0x124($s1)
    ctx->pc = 0x10f544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x10f548: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x10f548u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
    // 0x10f54c: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x10f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x10f550: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x10f550u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x10f554: 0x8e260134  lw          $a2, 0x134($s1)
    ctx->pc = 0x10f554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x10f558: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x10f558u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x10f55c: 0x8e220138  lw          $v0, 0x138($s1)
    ctx->pc = 0x10f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x10f560: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x10f560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x10f564: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x10f564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x10f568: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x10f568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x10f56c: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x10f56cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x10f570: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x10f570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x10f574: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x10f574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x10f578: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x10f578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x10f57c: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x10f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
    // 0x10f580: 0xae270124  sw          $a3, 0x124($s1)
    ctx->pc = 0x10f580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 7));
    // 0x10f584: 0xae250128  sw          $a1, 0x128($s1)
    ctx->pc = 0x10f584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 5));
    // 0x10f588: 0xae260134  sw          $a2, 0x134($s1)
    ctx->pc = 0x10f588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 6));
    // 0x10f58c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10f58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10f590: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10f590u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10f594: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10f594u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10f598: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10f598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f59c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10f59cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f5a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10f5a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f5a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F5A8u;
            // 0x10f5ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F5B0u;
}
