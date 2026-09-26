#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CD_SEEK__FP12RS_STACKDATAi
// Address: 0x266910 - 0x26694c
void ps2__CD_SEEK__FP12RS_STACKDATAi_0x266910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CD_SEEK__FP12RS_STACKDATAi_0x266910");
#endif

    switch (ctx->pc) {
        case 0x266920u: goto label_266920;
        case 0x26692cu: goto label_26692c;
        case 0x26693cu: goto label_26693c;
        default: break;
    }

    ctx->pc = 0x266910u;

    // 0x266910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x266910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x266914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x266918: 0xc097e48  jal         func_25F920
    ctx->pc = 0x266918u;
    SET_GPR_U32(ctx, 31, 0x266920u);
    ctx->pc = 0x26691Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266918u;
            // 0x26691c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266920u; }
        if (ctx->pc != 0x266920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266920u; }
        if (ctx->pc != 0x266920u) { return; }
    }
    ctx->pc = 0x266920u;
label_266920:
    // 0x266920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266924: 0xc047e82  jal         func_11FA08
    ctx->pc = 0x266924u;
    SET_GPR_U32(ctx, 31, 0x26692Cu);
    ctx->pc = 0x266928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266924u;
            // 0x266928: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FA08u;
    if (runtime->hasFunction(0x11FA08u)) {
        auto targetFn = runtime->lookupFunction(0x11FA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26692Cu; }
        if (ctx->pc != 0x26692Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSearchFile_0x11fa08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26692Cu; }
        if (ctx->pc != 0x26692Cu) { return; }
    }
    ctx->pc = 0x26692Cu;
label_26692c:
    // 0x26692c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26692Cu;
    {
        const bool branch_taken_0x26692c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26692Cu;
            // 0x266930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26692c) {
            ctx->pc = 0x26693Cu;
            goto label_26693c;
        }
    }
    ctx->pc = 0x266934u;
    // 0x266934: 0xc048244  jal         func_120910
    ctx->pc = 0x266934u;
    SET_GPR_U32(ctx, 31, 0x26693Cu);
    ctx->pc = 0x266938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266934u;
            // 0x266938: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120910u;
    if (runtime->hasFunction(0x120910u)) {
        auto targetFn = runtime->lookupFunction(0x120910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26693Cu; }
        if (ctx->pc != 0x26693Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSeek_0x120910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26693Cu; }
        if (ctx->pc != 0x26693Cu) { return; }
    }
    ctx->pc = 0x26693Cu;
label_26693c:
    // 0x26693c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26693cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266944: 0x3e00008  jr          $ra
    ctx->pc = 0x266944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266944u;
            // 0x266948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26694Cu;
}
