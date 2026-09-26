#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPIECE_NAME__FP9SPI_STACKi
// Address: 0x162470 - 0x162510
void mapPIECE_NAME__FP9SPI_STACKi_0x162470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPIECE_NAME__FP9SPI_STACKi_0x162470");
#endif

    switch (ctx->pc) {
        case 0x1624a4u: goto label_1624a4;
        case 0x1624b0u: goto label_1624b0;
        case 0x1624c4u: goto label_1624c4;
        case 0x1624ccu: goto label_1624cc;
        case 0x1624d8u: goto label_1624d8;
        case 0x1624e8u: goto label_1624e8;
        case 0x1624f4u: goto label_1624f4;
        default: break;
    }

    ctx->pc = 0x162470u;

    // 0x162470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162474: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x162474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x162478: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x162478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16247c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16247cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162480: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162488: 0x8f84891c  lw          $a0, -0x76E4($gp)
    ctx->pc = 0x162488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936860)));
    // 0x16248c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16248Cu;
    {
        const bool branch_taken_0x16248c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x162490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16248Cu;
            // 0x162490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16248c) {
            ctx->pc = 0x16249Cu;
            goto label_16249c;
        }
    }
    ctx->pc = 0x162494u;
    // 0x162494: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x162494u;
    {
        const bool branch_taken_0x162494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162494u;
            // 0x162498: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162494) {
            ctx->pc = 0x1624FCu;
            goto label_1624fc;
        }
    }
    ctx->pc = 0x16249Cu;
label_16249c:
    // 0x16249c: 0xc0588d8  jal         func_162360
    ctx->pc = 0x16249Cu;
    SET_GPR_U32(ctx, 31, 0x1624A4u);
    ctx->pc = 0x162360u;
    if (runtime->hasFunction(0x162360u)) {
        auto targetFn = runtime->lookupFunction(0x162360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624A4u; }
        if (ctx->pc != 0x1624A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapPiece_Fv_0x162360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624A4u; }
        if (ctx->pc != 0x1624A4u) { return; }
    }
    ctx->pc = 0x1624A4u;
label_1624a4:
    // 0x1624a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1624a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1624a8: 0xc05191c  jal         func_146470
    ctx->pc = 0x1624A8u;
    SET_GPR_U32(ctx, 31, 0x1624B0u);
    ctx->pc = 0x1624ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1624A8u;
            // 0x1624ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624B0u; }
        if (ctx->pc != 0x1624B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624B0u; }
        if (ctx->pc != 0x1624B0u) { return; }
    }
    ctx->pc = 0x1624B0u;
label_1624b0:
    // 0x1624b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1624b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1624b4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1624B4u;
    {
        const bool branch_taken_0x1624b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1624B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1624B4u;
            // 0x1624b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1624b4) {
            ctx->pc = 0x1624F8u;
            goto label_1624f8;
        }
    }
    ctx->pc = 0x1624BCu;
    // 0x1624bc: 0xc04a422  jal         func_129088
    ctx->pc = 0x1624BCu;
    SET_GPR_U32(ctx, 31, 0x1624C4u);
    ctx->pc = 0x1624C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1624BCu;
            // 0x1624c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624C4u; }
        if (ctx->pc != 0x1624C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624C4u; }
        if (ctx->pc != 0x1624C4u) { return; }
    }
    ctx->pc = 0x1624C4u;
label_1624c4:
    // 0x1624c4: 0xc05878c  jal         func_161E30
    ctx->pc = 0x1624C4u;
    SET_GPR_U32(ctx, 31, 0x1624CCu);
    ctx->pc = 0x1624C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1624C4u;
            // 0x1624c8: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161E30u;
    if (runtime->hasFunction(0x161E30u)) {
        auto targetFn = runtime->lookupFunction(0x161E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624CCu; }
        if (ctx->pc != 0x1624CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        algn16_size__FUi_0x161e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624CCu; }
        if (ctx->pc != 0x1624CCu) { return; }
    }
    ctx->pc = 0x1624CCu;
label_1624cc:
    // 0x1624cc: 0x8f848920  lw          $a0, -0x76E0($gp)
    ctx->pc = 0x1624ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x1624d0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1624D0u;
    SET_GPR_U32(ctx, 31, 0x1624D8u);
    ctx->pc = 0x1624D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1624D0u;
            // 0x1624d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624D8u; }
        if (ctx->pc != 0x1624D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624D8u; }
        if (ctx->pc != 0x1624D8u) { return; }
    }
    ctx->pc = 0x1624D8u;
label_1624d8:
    // 0x1624d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1624d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1624dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1624dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1624e0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1624E0u;
    SET_GPR_U32(ctx, 31, 0x1624E8u);
    ctx->pc = 0x1624E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1624E0u;
            // 0x1624e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624E8u; }
        if (ctx->pc != 0x1624E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624E8u; }
        if (ctx->pc != 0x1624E8u) { return; }
    }
    ctx->pc = 0x1624E8u;
label_1624e8:
    // 0x1624e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1624e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1624ec: 0xc0588d4  jal         func_162350
    ctx->pc = 0x1624ECu;
    SET_GPR_U32(ctx, 31, 0x1624F4u);
    ctx->pc = 0x1624F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1624ECu;
            // 0x1624f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162350u;
    if (runtime->hasFunction(0x162350u)) {
        auto targetFn = runtime->lookupFunction(0x162350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624F4u; }
        if (ctx->pc != 0x1624F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__9CMapPieceFPc_0x162350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624F4u; }
        if (ctx->pc != 0x1624F4u) { return; }
    }
    ctx->pc = 0x1624F4u;
label_1624f4:
    // 0x1624f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1624f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1624f8:
    // 0x1624f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1624f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1624fc:
    // 0x1624fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1624fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162508: 0x3e00008  jr          $ra
    ctx->pc = 0x162508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16250Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162508u;
            // 0x16250c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162510u;
}
