#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetArgInt__FP8ARG_DATA
// Address: 0x25fdb0 - 0x25fe04
void GetArgInt__FP8ARG_DATA_0x25fdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetArgInt__FP8ARG_DATA_0x25fdb0");
#endif

    switch (ctx->pc) {
        case 0x25fdc8u: goto label_25fdc8;
        case 0x25fde8u: goto label_25fde8;
        default: break;
    }

    ctx->pc = 0x25fdb0u;

    // 0x25fdb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25fdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25fdb4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25FDB4u;
    {
        const bool branch_taken_0x25fdb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FDB4u;
            // 0x25fdb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdb4) {
            ctx->pc = 0x25FDD0u;
            goto label_25fdd0;
        }
    }
    ctx->pc = 0x25FDBCu;
    // 0x25fdbc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x25fdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x25fdc0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x25FDC0u;
    SET_GPR_U32(ctx, 31, 0x25FDC8u);
    ctx->pc = 0x25FDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FDC0u;
            // 0x25fdc4: 0x2484c4a0  addiu       $a0, $a0, -0x3B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FDC8u; }
        if (ctx->pc != 0x25FDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FDC8u; }
        if (ctx->pc != 0x25FDC8u) { return; }
    }
    ctx->pc = 0x25FDC8u;
label_25fdc8:
    // 0x25fdc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25FDC8u;
    {
        const bool branch_taken_0x25fdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FDC8u;
            // 0x25fdcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdc8) {
            ctx->pc = 0x25FDF8u;
            goto label_25fdf8;
        }
    }
    ctx->pc = 0x25FDD0u;
label_25fdd0:
    // 0x25fdd0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25fdd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fdd8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FDD8u;
    {
        const bool branch_taken_0x25fdd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25fdd8) {
            ctx->pc = 0x25FDF0u;
            goto label_25fdf0;
        }
    }
    ctx->pc = 0x25FDE0u;
    // 0x25fde0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x25FDE0u;
    SET_GPR_U32(ctx, 31, 0x25FDE8u);
    ctx->pc = 0x25FDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FDE0u;
            // 0x25fde4: 0xc48c0004  lwc1        $f12, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FDE8u; }
        if (ctx->pc != 0x25FDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FDE8u; }
        if (ctx->pc != 0x25FDE8u) { return; }
    }
    ctx->pc = 0x25FDE8u;
label_25fde8:
    // 0x25fde8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25FDE8u;
    {
        const bool branch_taken_0x25fde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fde8) {
            ctx->pc = 0x25FDF8u;
            goto label_25fdf8;
        }
    }
    ctx->pc = 0x25FDF0u;
label_25fdf0:
    // 0x25fdf0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25fdf4: 0x0  nop
    ctx->pc = 0x25fdf4u;
    // NOP
label_25fdf8:
    // 0x25fdf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x25FDFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FDFCu;
            // 0x25fe00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FE04u;
}
