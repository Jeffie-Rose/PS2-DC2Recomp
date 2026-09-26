#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sigtramp_r
// Address: 0x128688 - 0x128740
void ps2___sigtramp_r_0x128688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sigtramp_r_0x128688");
#endif

    switch (ctx->pc) {
        case 0x128688u: goto label_128688;
        case 0x12868cu: goto label_12868c;
        case 0x128690u: goto label_128690;
        case 0x128694u: goto label_128694;
        case 0x128698u: goto label_128698;
        case 0x12869cu: goto label_12869c;
        case 0x1286a0u: goto label_1286a0;
        case 0x1286a4u: goto label_1286a4;
        case 0x1286a8u: goto label_1286a8;
        case 0x1286acu: goto label_1286ac;
        case 0x1286b0u: goto label_1286b0;
        case 0x1286b4u: goto label_1286b4;
        case 0x1286b8u: goto label_1286b8;
        case 0x1286bcu: goto label_1286bc;
        case 0x1286c0u: goto label_1286c0;
        case 0x1286c4u: goto label_1286c4;
        case 0x1286c8u: goto label_1286c8;
        case 0x1286ccu: goto label_1286cc;
        case 0x1286d0u: goto label_1286d0;
        case 0x1286d4u: goto label_1286d4;
        case 0x1286d8u: goto label_1286d8;
        case 0x1286dcu: goto label_1286dc;
        case 0x1286e0u: goto label_1286e0;
        case 0x1286e4u: goto label_1286e4;
        case 0x1286e8u: goto label_1286e8;
        case 0x1286ecu: goto label_1286ec;
        case 0x1286f0u: goto label_1286f0;
        case 0x1286f4u: goto label_1286f4;
        case 0x1286f8u: goto label_1286f8;
        case 0x1286fcu: goto label_1286fc;
        case 0x128700u: goto label_128700;
        case 0x128704u: goto label_128704;
        case 0x128708u: goto label_128708;
        case 0x12870cu: goto label_12870c;
        case 0x128710u: goto label_128710;
        case 0x128714u: goto label_128714;
        case 0x128718u: goto label_128718;
        case 0x12871cu: goto label_12871c;
        case 0x128720u: goto label_128720;
        case 0x128724u: goto label_128724;
        case 0x128728u: goto label_128728;
        case 0x12872cu: goto label_12872c;
        case 0x128730u: goto label_128730;
        case 0x128734u: goto label_128734;
        case 0x128738u: goto label_128738;
        case 0x12873cu: goto label_12873c;
        default: break;
    }

    ctx->pc = 0x128688u;

label_128688:
    // 0x128688: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x128688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12868c:
    // 0x12868c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12868cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_128690:
    // 0x128690: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_128694:
    // 0x128694: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x128694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_128698:
    // 0x128698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x128698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_12869c:
    // 0x12869c: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x12869cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_1286a0:
    // 0x1286a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1286a4:
    if (ctx->pc == 0x1286A4u) {
        ctx->pc = 0x1286A4u;
            // 0x1286a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1286A8u;
        goto label_1286a8;
    }
    ctx->pc = 0x1286A0u;
    {
        const bool branch_taken_0x1286a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286A0u;
            // 0x1286a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286a0) {
            ctx->pc = 0x1286C4u;
            goto label_1286c4;
        }
    }
    ctx->pc = 0x1286A8u;
label_1286a8:
    // 0x1286a8: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x1286a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_1286ac:
    // 0x1286ac: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1286b0:
    if (ctx->pc == 0x1286B0u) {
        ctx->pc = 0x1286B0u;
            // 0x1286b0: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x1286B4u;
        goto label_1286b4;
    }
    ctx->pc = 0x1286ACu;
    {
        const bool branch_taken_0x1286ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1286B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286ACu;
            // 0x1286b0: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286ac) {
            ctx->pc = 0x1286D0u;
            goto label_1286d0;
        }
    }
    ctx->pc = 0x1286B4u;
label_1286b4:
    // 0x1286b4: 0xc04a126  jal         func_128498
label_1286b8:
    if (ctx->pc == 0x1286B8u) {
        ctx->pc = 0x1286B8u;
            // 0x1286b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1286BCu;
        goto label_1286bc;
    }
    ctx->pc = 0x1286B4u;
    SET_GPR_U32(ctx, 31, 0x1286BCu);
    ctx->pc = 0x1286B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1286B4u;
            // 0x1286b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128498u;
    if (runtime->hasFunction(0x128498u)) {
        auto targetFn = runtime->lookupFunction(0x128498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1286BCu; }
        if (ctx->pc != 0x1286BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _init_signal_r_0x128498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1286BCu; }
        if (ctx->pc != 0x1286BCu) { return; }
    }
    ctx->pc = 0x1286BCu;
label_1286bc:
    // 0x1286bc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1286c0:
    if (ctx->pc == 0x1286C0u) {
        ctx->pc = 0x1286C0u;
            // 0x1286c0: 0x8e0401d4  lw          $a0, 0x1D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->pc = 0x1286C4u;
        goto label_1286c4;
    }
    ctx->pc = 0x1286BCu;
    {
        const bool branch_taken_0x1286bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1286bc) {
            ctx->pc = 0x1286C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1286BCu;
            // 0x1286c0: 0x8e0401d4  lw          $a0, 0x1D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1286CCu;
            goto label_1286cc;
        }
    }
    ctx->pc = 0x1286C4u;
label_1286c4:
    // 0x1286c4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1286c8:
    if (ctx->pc == 0x1286C8u) {
        ctx->pc = 0x1286C8u;
            // 0x1286c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1286CCu;
        goto label_1286cc;
    }
    ctx->pc = 0x1286C4u;
    {
        const bool branch_taken_0x1286c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286C4u;
            // 0x1286c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286c4) {
            ctx->pc = 0x12872Cu;
            goto label_12872c;
        }
    }
    ctx->pc = 0x1286CCu;
label_1286cc:
    // 0x1286cc: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x1286ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1286d0:
    // 0x1286d0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1286d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1286d4:
    // 0x1286d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1286d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1286d8:
    // 0x1286d8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1286dc:
    if (ctx->pc == 0x1286DCu) {
        ctx->pc = 0x1286DCu;
            // 0x1286dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1286E0u;
        goto label_1286e0;
    }
    ctx->pc = 0x1286D8u;
    {
        const bool branch_taken_0x1286d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286D8u;
            // 0x1286dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286d8) {
            ctx->pc = 0x12872Cu;
            goto label_12872c;
        }
    }
    ctx->pc = 0x1286E0u;
label_1286e0:
    // 0x1286e0: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
label_1286e4:
    if (ctx->pc == 0x1286E4u) {
        ctx->pc = 0x1286E8u;
        goto label_1286e8;
    }
    ctx->pc = 0x1286E0u;
    {
        const bool branch_taken_0x1286e0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1286e0) {
            ctx->pc = 0x1286FCu;
            goto label_1286fc;
        }
    }
    ctx->pc = 0x1286E8u;
label_1286e8:
    // 0x1286e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1286e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1286ec:
    // 0x1286ec: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1286f0:
    if (ctx->pc == 0x1286F0u) {
        ctx->pc = 0x1286F0u;
            // 0x1286f0: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x1286F4u;
        goto label_1286f4;
    }
    ctx->pc = 0x1286ECu;
    {
        const bool branch_taken_0x1286ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1286F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286ECu;
            // 0x1286f0: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286ec) {
            ctx->pc = 0x12870Cu;
            goto label_12870c;
        }
    }
    ctx->pc = 0x1286F4u;
label_1286f4:
    // 0x1286f4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1286f8:
    if (ctx->pc == 0x1286F8u) {
        ctx->pc = 0x1286F8u;
            // 0x1286f8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x1286FCu;
        goto label_1286fc;
    }
    ctx->pc = 0x1286F4u;
    {
        const bool branch_taken_0x1286f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286F4u;
            // 0x1286f8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286f4) {
            ctx->pc = 0x12871Cu;
            goto label_12871c;
        }
    }
    ctx->pc = 0x1286FCu;
label_1286fc:
    // 0x1286fc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_128700:
    if (ctx->pc == 0x128700u) {
        ctx->pc = 0x128700u;
            // 0x128700: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x128704u;
        goto label_128704;
    }
    ctx->pc = 0x1286FCu;
    {
        const bool branch_taken_0x1286fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x128700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286FCu;
            // 0x128700: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286fc) {
            ctx->pc = 0x128714u;
            goto label_128714;
        }
    }
    ctx->pc = 0x128704u;
label_128704:
    // 0x128704: 0x10000005  b           . + 4 + (0x5 << 2)
label_128708:
    if (ctx->pc == 0x128708u) {
        ctx->pc = 0x128708u;
            // 0x128708: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x12870Cu;
        goto label_12870c;
    }
    ctx->pc = 0x128704u;
    {
        const bool branch_taken_0x128704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128704u;
            // 0x128708: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128704) {
            ctx->pc = 0x12871Cu;
            goto label_12871c;
        }
    }
    ctx->pc = 0x12870Cu;
label_12870c:
    // 0x12870c: 0x10000007  b           . + 4 + (0x7 << 2)
label_128710:
    if (ctx->pc == 0x128710u) {
        ctx->pc = 0x128710u;
            // 0x128710: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x128714u;
        goto label_128714;
    }
    ctx->pc = 0x12870Cu;
    {
        const bool branch_taken_0x12870c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12870Cu;
            // 0x128710: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12870c) {
            ctx->pc = 0x12872Cu;
            goto label_12872c;
        }
    }
    ctx->pc = 0x128714u;
label_128714:
    // 0x128714: 0x10000005  b           . + 4 + (0x5 << 2)
label_128718:
    if (ctx->pc == 0x128718u) {
        ctx->pc = 0x128718u;
            // 0x128718: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x12871Cu;
        goto label_12871c;
    }
    ctx->pc = 0x128714u;
    {
        const bool branch_taken_0x128714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128714u;
            // 0x128718: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128714) {
            ctx->pc = 0x12872Cu;
            goto label_12872c;
        }
    }
    ctx->pc = 0x12871Cu;
label_12871c:
    // 0x12871c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12871cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_128720:
    // 0x128720: 0x60f809  jalr        $v1
label_128724:
    if (ctx->pc == 0x128724u) {
        ctx->pc = 0x128724u;
            // 0x128724: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x128728u;
        goto label_128728;
    }
    ctx->pc = 0x128720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x128728u);
        ctx->pc = 0x128724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128720u;
            // 0x128724: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128728u; }
            if (ctx->pc != 0x128728u) { return; }
        }
        }
    }
    ctx->pc = 0x128728u;
label_128728:
    // 0x128728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x128728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12872c:
    // 0x12872c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12872cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_128730:
    // 0x128730: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x128730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_128734:
    // 0x128734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_128738:
    // 0x128738: 0x3e00008  jr          $ra
label_12873c:
    if (ctx->pc == 0x12873Cu) {
        ctx->pc = 0x12873Cu;
            // 0x12873c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x128740u;
        goto label_fallthrough_0x128738;
    }
    ctx->pc = 0x128738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12873Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128738u;
            // 0x12873c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x128738:
    ctx->pc = 0x128740u;
}
