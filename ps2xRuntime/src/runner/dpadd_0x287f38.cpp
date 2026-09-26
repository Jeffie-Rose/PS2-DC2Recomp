#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dpadd
// Address: 0x287f38 - 0x287f90
void dpadd_0x287f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpadd_0x287f38");
#endif

    switch (ctx->pc) {
        case 0x287f58u: goto label_287f58;
        case 0x287f68u: goto label_287f68;
        case 0x287f78u: goto label_287f78;
        case 0x287f80u: goto label_287f80;
        default: break;
    }

    ctx->pc = 0x287f38u;

    // 0x287f38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x287f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x287f3c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x287f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x287f40: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x287f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x287f44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x287f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x287f48: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x287f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x287f4c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x287f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x287f50: 0xc0a1f16  jal         func_287C58
    ctx->pc = 0x287F50u;
    SET_GPR_U32(ctx, 31, 0x287F58u);
    ctx->pc = 0x287F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287F50u;
            // 0x287f54: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C58u;
    if (runtime->hasFunction(0x287C58u)) {
        auto targetFn = runtime->lookupFunction(0x287C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F58u; }
        if (ctx->pc != 0x287F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x287c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F58u; }
        if (ctx->pc != 0x287F58u) { return; }
    }
    ctx->pc = 0x287F58u;
label_287f58:
    // 0x287f58: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x287f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x287f5c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x287f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x287f60: 0xc0a1f16  jal         func_287C58
    ctx->pc = 0x287F60u;
    SET_GPR_U32(ctx, 31, 0x287F68u);
    ctx->pc = 0x287F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287F60u;
            // 0x287f64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C58u;
    if (runtime->hasFunction(0x287C58u)) {
        auto targetFn = runtime->lookupFunction(0x287C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F68u; }
        if (ctx->pc != 0x287F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x287c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F68u; }
        if (ctx->pc != 0x287F68u) { return; }
    }
    ctx->pc = 0x287F68u;
label_287f68:
    // 0x287f68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f6c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x287f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x287f70: 0xc0a1f3e  jal         func_287CF8
    ctx->pc = 0x287F70u;
    SET_GPR_U32(ctx, 31, 0x287F78u);
    ctx->pc = 0x287F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287F70u;
            // 0x287f74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287CF8u;
    if (runtime->hasFunction(0x287CF8u)) {
        auto targetFn = runtime->lookupFunction(0x287CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F78u; }
        if (ctx->pc != 0x287F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x287cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F78u; }
        if (ctx->pc != 0x287F78u) { return; }
    }
    ctx->pc = 0x287F78u;
label_287f78:
    // 0x287f78: 0xc0a1eca  jal         func_287B28
    ctx->pc = 0x287F78u;
    SET_GPR_U32(ctx, 31, 0x287F80u);
    ctx->pc = 0x287F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287F78u;
            // 0x287f7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287B28u;
    if (runtime->hasFunction(0x287B28u)) {
        auto targetFn = runtime->lookupFunction(0x287B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F80u; }
        if (ctx->pc != 0x287F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x287b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F80u; }
        if (ctx->pc != 0x287F80u) { return; }
    }
    ctx->pc = 0x287F80u;
label_287f80:
    // 0x287f80: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x287f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x287f84: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x287f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x287f88: 0x3e00008  jr          $ra
    ctx->pc = 0x287F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287F88u;
            // 0x287f8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287F90u;
}
