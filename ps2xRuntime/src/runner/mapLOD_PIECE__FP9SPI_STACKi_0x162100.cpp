#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapLOD_PIECE__FP9SPI_STACKi
// Address: 0x162100 - 0x1621a8
void mapLOD_PIECE__FP9SPI_STACKi_0x162100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapLOD_PIECE__FP9SPI_STACKi_0x162100");
#endif

    switch (ctx->pc) {
        case 0x162134u: goto label_162134;
        case 0x162144u: goto label_162144;
        case 0x162150u: goto label_162150;
        case 0x16215cu: goto label_16215c;
        case 0x162180u: goto label_162180;
        default: break;
    }

    ctx->pc = 0x162100u;

    // 0x162100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162104: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x162104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x162108: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x162108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16210c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16210cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162114: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162118: 0x8f848918  lw          $a0, -0x76E8($gp)
    ctx->pc = 0x162118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x16211c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16211Cu;
    {
        const bool branch_taken_0x16211c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x162120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16211Cu;
            // 0x162120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16211c) {
            ctx->pc = 0x16212Cu;
            goto label_16212c;
        }
    }
    ctx->pc = 0x162124u;
    // 0x162124: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x162124u;
    {
        const bool branch_taken_0x162124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162124u;
            // 0x162128: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162124) {
            ctx->pc = 0x162194u;
            goto label_162194;
        }
    }
    ctx->pc = 0x16212Cu;
label_16212c:
    // 0x16212c: 0xc05874c  jal         func_161D30
    ctx->pc = 0x16212Cu;
    SET_GPR_U32(ctx, 31, 0x162134u);
    ctx->pc = 0x161D30u;
    if (runtime->hasFunction(0x161D30u)) {
        auto targetFn = runtime->lookupFunction(0x161D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162134u; }
        if (ctx->pc != 0x162134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapParts_Fv_0x161d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162134u; }
        if (ctx->pc != 0x162134u) { return; }
    }
    ctx->pc = 0x162134u;
label_162134:
    // 0x162134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16213c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x16213Cu;
    SET_GPR_U32(ctx, 31, 0x162144u);
    ctx->pc = 0x162140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16213Cu;
            // 0x162140: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162144u; }
        if (ctx->pc != 0x162144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162144u; }
        if (ctx->pc != 0x162144u) { return; }
    }
    ctx->pc = 0x162144u;
label_162144:
    // 0x162144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162148: 0xc05191c  jal         func_146470
    ctx->pc = 0x162148u;
    SET_GPR_U32(ctx, 31, 0x162150u);
    ctx->pc = 0x16214Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162148u;
            // 0x16214c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162150u; }
        if (ctx->pc != 0x162150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162150u; }
        if (ctx->pc != 0x162150u) { return; }
    }
    ctx->pc = 0x162150u;
label_162150:
    // 0x162150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162154: 0xc059924  jal         func_166490
    ctx->pc = 0x162154u;
    SET_GPR_U32(ctx, 31, 0x16215Cu);
    ctx->pc = 0x162158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162154u;
            // 0x162158: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (runtime->hasFunction(0x166490u)) {
        auto targetFn = runtime->lookupFunction(0x166490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16215Cu; }
        if (ctx->pc != 0x16215Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPiece__9CMapPartsFPc_0x166490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16215Cu; }
        if (ctx->pc != 0x16215Cu) { return; }
    }
    ctx->pc = 0x16215Cu;
label_16215c:
    // 0x16215c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16215cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162160: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x162160u;
    {
        const bool branch_taken_0x162160 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x162164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162160u;
            // 0x162164: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162160) {
            ctx->pc = 0x162190u;
            goto label_162190;
        }
    }
    ctx->pc = 0x162168u;
    // 0x162168: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162168u;
    {
        const bool branch_taken_0x162168 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x16216Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162168u;
            // 0x16216c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162168) {
            ctx->pc = 0x162178u;
            goto label_162178;
        }
    }
    ctx->pc = 0x162170u;
    // 0x162170: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x162170u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x162174: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x162174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_162178:
    // 0x162178: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x162178u;
    SET_GPR_U32(ctx, 31, 0x162180u);
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162180u; }
        if (ctx->pc != 0x162180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLODBlend__9CMapPartsFv_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162180u; }
        if (ctx->pc != 0x162180u) { return; }
    }
    ctx->pc = 0x162180u;
label_162180:
    // 0x162180: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x162180u;
    {
        const bool branch_taken_0x162180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162180u;
            // 0x162184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162180) {
            ctx->pc = 0x16218Cu;
            goto label_16218c;
        }
    }
    ctx->pc = 0x162188u;
    // 0x162188: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x162188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_16218c:
    // 0x16218c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162190:
    // 0x162190: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x162190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_162194:
    // 0x162194: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x162194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16219c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16219cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1621a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1621A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1621A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1621A0u;
            // 0x1621a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1621A8u;
}
