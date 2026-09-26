#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MAP_JUMP__FP12RS_STACKDATAi
// Address: 0x263940 - 0x263a24
void ps2__MAP_JUMP__FP12RS_STACKDATAi_0x263940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MAP_JUMP__FP12RS_STACKDATAi_0x263940");
#endif

    switch (ctx->pc) {
        case 0x26395cu: goto label_26395c;
        case 0x26398cu: goto label_26398c;
        case 0x263998u: goto label_263998;
        case 0x2639a8u: goto label_2639a8;
        case 0x2639b8u: goto label_2639b8;
        case 0x2639c8u: goto label_2639c8;
        case 0x2639ecu: goto label_2639ec;
        default: break;
    }

    ctx->pc = 0x263940u;

    // 0x263940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x263940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x263944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x263944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x263948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x263948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26394c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26394cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x263950: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x263950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x263954: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263954u;
    SET_GPR_U32(ctx, 31, 0x26395Cu);
    ctx->pc = 0x263958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263954u;
            // 0x263958: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26395Cu; }
        if (ctx->pc != 0x26395Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26395Cu; }
        if (ctx->pc != 0x26395Cu) { return; }
    }
    ctx->pc = 0x26395Cu;
label_26395c:
    // 0x26395c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26395cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x263960: 0xac22e494  sw          $v0, -0x1B6C($at)
    ctx->pc = 0x263960u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960276), GPR_U32(ctx, 2));
    // 0x263964: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x263964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x263968: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26396c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26396Cu;
    {
        const bool branch_taken_0x26396c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x263970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26396Cu;
            // 0x263970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26396c) {
            ctx->pc = 0x2639B0u;
            goto label_2639b0;
        }
    }
    ctx->pc = 0x263974u;
    // 0x263974: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x263974u;
    {
        const bool branch_taken_0x263974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x263978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263974u;
            // 0x263978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263974) {
            ctx->pc = 0x263984u;
            goto label_263984;
        }
    }
    ctx->pc = 0x26397Cu;
    // 0x26397c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26397Cu;
    {
        const bool branch_taken_0x26397c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26397Cu;
            // 0x263980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26397c) {
            ctx->pc = 0x2639D0u;
            goto label_2639d0;
        }
    }
    ctx->pc = 0x263984u;
label_263984:
    // 0x263984: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263984u;
    SET_GPR_U32(ctx, 31, 0x26398Cu);
    ctx->pc = 0x263988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263984u;
            // 0x263988: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26398Cu; }
        if (ctx->pc != 0x26398Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26398Cu; }
        if (ctx->pc != 0x26398Cu) { return; }
    }
    ctx->pc = 0x26398Cu;
label_26398c:
    // 0x26398c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26398cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263990: 0xc0b49e8  jal         func_2D27A0
    ctx->pc = 0x263990u;
    SET_GPR_U32(ctx, 31, 0x263998u);
    ctx->pc = 0x263994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263990u;
            // 0x263994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27A0u;
    if (runtime->hasFunction(0x2D27A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263998u; }
        if (ctx->pc != 0x263998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__FiPPc_0x2d27a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263998u; }
        if (ctx->pc != 0x263998u) { return; }
    }
    ctx->pc = 0x263998u;
label_263998:
    // 0x263998: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x263998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x26399c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26399cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2639a0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2639A0u;
    SET_GPR_U32(ctx, 31, 0x2639A8u);
    ctx->pc = 0x2639A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2639A0u;
            // 0x2639a4: 0x2484e498  addiu       $a0, $a0, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2639A8u; }
        if (ctx->pc != 0x2639A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2639A8u; }
        if (ctx->pc != 0x2639A8u) { return; }
    }
    ctx->pc = 0x2639A8u;
label_2639a8:
    // 0x2639a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2639A8u;
    {
        const bool branch_taken_0x2639a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2639ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2639A8u;
            // 0x2639ac: 0x2a010003  slti        $at, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639a8) {
            ctx->pc = 0x2639DCu;
            goto label_2639dc;
        }
    }
    ctx->pc = 0x2639B0u;
label_2639b0:
    // 0x2639b0: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2639B0u;
    SET_GPR_U32(ctx, 31, 0x2639B8u);
    ctx->pc = 0x2639B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2639B0u;
            // 0x2639b4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2639B8u; }
        if (ctx->pc != 0x2639B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2639B8u; }
        if (ctx->pc != 0x2639B8u) { return; }
    }
    ctx->pc = 0x2639B8u;
label_2639b8:
    // 0x2639b8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2639b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2639bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2639bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2639c0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2639C0u;
    SET_GPR_U32(ctx, 31, 0x2639C8u);
    ctx->pc = 0x2639C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2639C0u;
            // 0x2639c4: 0x2484e498  addiu       $a0, $a0, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2639C8u; }
        if (ctx->pc != 0x2639C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2639C8u; }
        if (ctx->pc != 0x2639C8u) { return; }
    }
    ctx->pc = 0x2639C8u;
label_2639c8:
    // 0x2639c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2639C8u;
    {
        const bool branch_taken_0x2639c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2639c8) {
            ctx->pc = 0x2639D8u;
            goto label_2639d8;
        }
    }
    ctx->pc = 0x2639D0u;
label_2639d0:
    // 0x2639d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2639D0u;
    {
        const bool branch_taken_0x2639d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2639D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2639D0u;
            // 0x2639d4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639d0) {
            ctx->pc = 0x263A14u;
            goto label_263a14;
        }
    }
    ctx->pc = 0x2639D8u;
label_2639d8:
    // 0x2639d8: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x2639d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_2639dc:
    // 0x2639dc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2639DCu;
    {
        const bool branch_taken_0x2639dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2639E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2639DCu;
            // 0x2639e0: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639dc) {
            ctx->pc = 0x2639F8u;
            goto label_2639f8;
        }
    }
    ctx->pc = 0x2639E4u;
    // 0x2639e4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2639E4u;
    SET_GPR_U32(ctx, 31, 0x2639ECu);
    ctx->pc = 0x2639E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2639E4u;
            // 0x2639e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2639ECu; }
        if (ctx->pc != 0x2639ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2639ECu; }
        if (ctx->pc != 0x2639ECu) { return; }
    }
    ctx->pc = 0x2639ECu;
label_2639ec:
    // 0x2639ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2639ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2639f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2639F0u;
    {
        const bool branch_taken_0x2639f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2639F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2639F0u;
            // 0x2639f4: 0xac22e4b8  sw          $v0, -0x1B48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639f0) {
            ctx->pc = 0x263A00u;
            goto label_263a00;
        }
    }
    ctx->pc = 0x2639F8u;
label_2639f8:
    // 0x2639f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2639f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2639fc: 0xac22e4b8  sw          $v0, -0x1B48($at)
    ctx->pc = 0x2639fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
label_263a00:
    // 0x263a00: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x263a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x263a04: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x263a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x263a08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263a0c: 0xac23e4fc  sw          $v1, -0x1B04($at)
    ctx->pc = 0x263a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 3));
    // 0x263a10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x263a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_263a14:
    // 0x263a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x263a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x263A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263A1Cu;
            // 0x263a20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263A24u;
}
