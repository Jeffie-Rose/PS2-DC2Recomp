#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12CObjectFrameFv
// Address: 0x169fd0 - 0x16a010
void Draw__12CObjectFrameFv_0x169fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12CObjectFrameFv_0x169fd0");
#endif

    switch (ctx->pc) {
        case 0x169fe4u: goto label_169fe4;
        case 0x169ffcu: goto label_169ffc;
        default: break;
    }

    ctx->pc = 0x169fd0u;

    // 0x169fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169fdc: 0xc05a7cc  jal         func_169F30
    ctx->pc = 0x169FDCu;
    SET_GPR_U32(ctx, 31, 0x169FE4u);
    ctx->pc = 0x169FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169FDCu;
            // 0x169fe0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169F30u;
    if (runtime->hasFunction(0x169F30u)) {
        auto targetFn = runtime->lookupFunction(0x169F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FE4u; }
        if (ctx->pc != 0x169FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PreDraw__12CObjectFrameFv_0x169f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FE4u; }
        if (ctx->pc != 0x169FE4u) { return; }
    }
    ctx->pc = 0x169FE4u;
label_169fe4:
    // 0x169fe4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169FE4u;
    {
        const bool branch_taken_0x169fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169FE4u;
            // 0x169fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169fe4) {
            ctx->pc = 0x169FF4u;
            goto label_169ff4;
        }
    }
    ctx->pc = 0x169FECu;
    // 0x169fec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x169FECu;
    {
        const bool branch_taken_0x169fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169FECu;
            // 0x169ff0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169fec) {
            ctx->pc = 0x16A004u;
            goto label_16a004;
        }
    }
    ctx->pc = 0x169FF4u;
label_169ff4:
    // 0x169ff4: 0xc050be4  jal         func_142F90
    ctx->pc = 0x169FF4u;
    SET_GPR_U32(ctx, 31, 0x169FFCu);
    ctx->pc = 0x169FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169FF4u;
            // 0x169ff8: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142F90u;
    if (runtime->hasFunction(0x142F90u)) {
        auto targetFn = runtime->lookupFunction(0x142F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FFCu; }
        if (ctx->pc != 0x169FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDraw__FP8mgCFrame_0x142f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FFCu; }
        if (ctx->pc != 0x169FFCu) { return; }
    }
    ctx->pc = 0x169FFCu;
label_169ffc:
    // 0x169ffc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a004:
    // 0x16a004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a008: 0x3e00008  jr          $ra
    ctx->pc = 0x16A008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A008u;
            // 0x16a00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A010u;
}
