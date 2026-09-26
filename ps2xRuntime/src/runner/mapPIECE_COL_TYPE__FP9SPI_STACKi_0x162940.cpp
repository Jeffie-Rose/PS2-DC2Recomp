#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPIECE_COL_TYPE__FP9SPI_STACKi
// Address: 0x162940 - 0x1629bc
void mapPIECE_COL_TYPE__FP9SPI_STACKi_0x162940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPIECE_COL_TYPE__FP9SPI_STACKi_0x162940");
#endif

    switch (ctx->pc) {
        case 0x162974u: goto label_162974;
        case 0x162984u: goto label_162984;
        case 0x16299cu: goto label_16299c;
        default: break;
    }

    ctx->pc = 0x162940u;

    // 0x162940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x162944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x162948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x162948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16294c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16294cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x162950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162958: 0x8f84891c  lw          $a0, -0x76E4($gp)
    ctx->pc = 0x162958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936860)));
    // 0x16295c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16295Cu;
    {
        const bool branch_taken_0x16295c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x162960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16295Cu;
            // 0x162960: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16295c) {
            ctx->pc = 0x16296Cu;
            goto label_16296c;
        }
    }
    ctx->pc = 0x162964u;
    // 0x162964: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x162964u;
    {
        const bool branch_taken_0x162964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162964u;
            // 0x162968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162964) {
            ctx->pc = 0x1629A4u;
            goto label_1629a4;
        }
    }
    ctx->pc = 0x16296Cu;
label_16296c:
    // 0x16296c: 0xc0588d8  jal         func_162360
    ctx->pc = 0x16296Cu;
    SET_GPR_U32(ctx, 31, 0x162974u);
    ctx->pc = 0x162360u;
    if (runtime->hasFunction(0x162360u)) {
        auto targetFn = runtime->lookupFunction(0x162360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162974u; }
        if (ctx->pc != 0x162974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapPiece_Fv_0x162360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162974u; }
        if (ctx->pc != 0x162974u) { return; }
    }
    ctx->pc = 0x162974u;
label_162974:
    // 0x162974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162978: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16297c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x16297Cu;
    SET_GPR_U32(ctx, 31, 0x162984u);
    ctx->pc = 0x162980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16297Cu;
            // 0x162980: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162984u; }
        if (ctx->pc != 0x162984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162984u; }
        if (ctx->pc != 0x162984u) { return; }
    }
    ctx->pc = 0x162984u;
label_162984:
    // 0x162984: 0xa60200a0  sh          $v0, 0xA0($s0)
    ctx->pc = 0x162984u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 2));
    // 0x162988: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x162988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16298c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16298Cu;
    {
        const bool branch_taken_0x16298c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16298Cu;
            // 0x162990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16298c) {
            ctx->pc = 0x1629A4u;
            goto label_1629a4;
        }
    }
    ctx->pc = 0x162994u;
    // 0x162994: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x162994u;
    SET_GPR_U32(ctx, 31, 0x16299Cu);
    ctx->pc = 0x162998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162994u;
            // 0x162998: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16299Cu; }
        if (ctx->pc != 0x16299Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16299Cu; }
        if (ctx->pc != 0x16299Cu) { return; }
    }
    ctx->pc = 0x16299Cu;
label_16299c:
    // 0x16299c: 0xa60200a2  sh          $v0, 0xA2($s0)
    ctx->pc = 0x16299cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x1629a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1629a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1629a4:
    // 0x1629a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1629a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1629a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1629a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1629ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1629acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1629b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1629b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1629b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1629B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1629B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1629B4u;
            // 0x1629b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1629BCu;
}
