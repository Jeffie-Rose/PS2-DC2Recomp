#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__10CDAColPipeFv
// Address: 0x17bde0 - 0x17be20
void Initialize__10CDAColPipeFv_0x17bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__10CDAColPipeFv_0x17bde0");
#endif

    switch (ctx->pc) {
        case 0x17bdfcu: goto label_17bdfc;
        case 0x17be04u: goto label_17be04;
        default: break;
    }

    ctx->pc = 0x17bde0u;

    // 0x17bde0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bde4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bde8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bdec: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x17bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x17bdf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17bdf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdf4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x17BDF4u;
    SET_GPR_U32(ctx, 31, 0x17BDFCu);
    ctx->pc = 0x17BDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BDF4u;
            // 0x17bdf8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDFCu; }
        if (ctx->pc != 0x17BDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDFCu; }
        if (ctx->pc != 0x17BDFCu) { return; }
    }
    ctx->pc = 0x17BDFCu;
label_17bdfc:
    // 0x17bdfc: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x17BDFCu;
    SET_GPR_U32(ctx, 31, 0x17BE04u);
    ctx->pc = 0x17BE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BDFCu;
            // 0x17be00: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE04u; }
        if (ctx->pc != 0x17BE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE04u; }
        if (ctx->pc != 0x17BE04u) { return; }
    }
    ctx->pc = 0x17BE04u;
label_17be04:
    // 0x17be04: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x17be04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x17be08: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x17be08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x17be0c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x17be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x17be10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17be10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17be14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17be14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17be18: 0x3e00008  jr          $ra
    ctx->pc = 0x17BE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE18u;
            // 0x17be1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BE20u;
}
