#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFIX_CAMERA_POS__FP9SPI_STACKi
// Address: 0x162f90 - 0x162fec
void mapFIX_CAMERA_POS__FP9SPI_STACKi_0x162f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFIX_CAMERA_POS__FP9SPI_STACKi_0x162f90");
#endif

    switch (ctx->pc) {
        case 0x162fa4u: goto label_162fa4;
        case 0x162fc0u: goto label_162fc0;
        case 0x162fd8u: goto label_162fd8;
        default: break;
    }

    ctx->pc = 0x162f90u;

    // 0x162f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162f9c: 0xc058720  jal         func_161C80
    ctx->pc = 0x162F9Cu;
    SET_GPR_U32(ctx, 31, 0x162FA4u);
    ctx->pc = 0x162FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162F9Cu;
            // 0x162fa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161C80u;
    if (runtime->hasFunction(0x161C80u)) {
        auto targetFn = runtime->lookupFunction(0x161C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FA4u; }
        if (ctx->pc != 0x162FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAddMode__Fv_0x161c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FA4u; }
        if (ctx->pc != 0x162FA4u) { return; }
    }
    ctx->pc = 0x162FA4u;
label_162fa4:
    // 0x162fa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162FA4u;
    {
        const bool branch_taken_0x162fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162FA4u;
            // 0x162fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fa4) {
            ctx->pc = 0x162FB4u;
            goto label_162fb4;
        }
    }
    ctx->pc = 0x162FACu;
    // 0x162fac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x162FACu;
    {
        const bool branch_taken_0x162fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162FACu;
            // 0x162fb0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fac) {
            ctx->pc = 0x162FE0u;
            goto label_162fe0;
        }
    }
    ctx->pc = 0x162FB4u;
label_162fb4:
    // 0x162fb4: 0x8f858934  lw          $a1, -0x76CC($gp)
    ctx->pc = 0x162fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936884)));
    // 0x162fb8: 0xc0572fc  jal         func_15CBF0
    ctx->pc = 0x162FB8u;
    SET_GPR_U32(ctx, 31, 0x162FC0u);
    ctx->pc = 0x162FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162FB8u;
            // 0x162fbc: 0x8f848914  lw          $a0, -0x76EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CBF0u;
    if (runtime->hasFunction(0x15CBF0u)) {
        auto targetFn = runtime->lookupFunction(0x15CBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FC0u; }
        if (ctx->pc != 0x162FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCameraInfo__4CMapFi_0x15cbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FC0u; }
        if (ctx->pc != 0x162FC0u) { return; }
    }
    ctx->pc = 0x162FC0u;
label_162fc0:
    // 0x162fc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162FC0u;
    {
        const bool branch_taken_0x162fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162FC0u;
            // 0x162fc4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fc0) {
            ctx->pc = 0x162FD0u;
            goto label_162fd0;
        }
    }
    ctx->pc = 0x162FC8u;
    // 0x162fc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x162FC8u;
    {
        const bool branch_taken_0x162fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162FC8u;
            // 0x162fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fc8) {
            ctx->pc = 0x162FDCu;
            goto label_162fdc;
        }
    }
    ctx->pc = 0x162FD0u;
label_162fd0:
    // 0x162fd0: 0xc051928  jal         func_1464A0
    ctx->pc = 0x162FD0u;
    SET_GPR_U32(ctx, 31, 0x162FD8u);
    ctx->pc = 0x162FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162FD0u;
            // 0x162fd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FD8u; }
        if (ctx->pc != 0x162FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FD8u; }
        if (ctx->pc != 0x162FD8u) { return; }
    }
    ctx->pc = 0x162FD8u;
label_162fd8:
    // 0x162fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162fdc:
    // 0x162fdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162fe0:
    // 0x162fe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x162FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162FE4u;
            // 0x162fe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162FECu;
}
