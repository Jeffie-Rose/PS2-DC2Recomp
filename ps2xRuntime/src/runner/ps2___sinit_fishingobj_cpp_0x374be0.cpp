#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_fishingobj.cpp
// Address: 0x374be0 - 0x374c30
void ps2___sinit_fishingobj_cpp_0x374be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_fishingobj_cpp_0x374be0");
#endif

    switch (ctx->pc) {
        case 0x374bfcu: goto label_374bfc;
        case 0x374c10u: goto label_374c10;
        case 0x374c24u: goto label_374c24;
        default: break;
    }

    ctx->pc = 0x374be0u;

    // 0x374be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374be4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374be8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374bec: 0x2484edc0  addiu       $a0, $a0, -0x1240
    ctx->pc = 0x374becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962624));
    // 0x374bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x374bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374bf4: 0xc049c86  jal         func_127218
    ctx->pc = 0x374BF4u;
    SET_GPR_U32(ctx, 31, 0x374BFCu);
    ctx->pc = 0x374BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374BF4u;
            // 0x374bf8: 0x240603d0  addiu       $a2, $zero, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374BFCu; }
        if (ctx->pc != 0x374BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374BFCu; }
        if (ctx->pc != 0x374BFCu) { return; }
    }
    ctx->pc = 0x374BFCu;
label_374bfc:
    // 0x374bfc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x374c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374c04: 0x2484f190  addiu       $a0, $a0, -0xE70
    ctx->pc = 0x374c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963600));
    // 0x374c08: 0xc049c86  jal         func_127218
    ctx->pc = 0x374C08u;
    SET_GPR_U32(ctx, 31, 0x374C10u);
    ctx->pc = 0x374C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374C08u;
            // 0x374c0c: 0x240603d0  addiu       $a2, $zero, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C10u; }
        if (ctx->pc != 0x374C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C10u; }
        if (ctx->pc != 0x374C10u) { return; }
    }
    ctx->pc = 0x374C10u;
label_374c10:
    // 0x374c10: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374c14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x374c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374c18: 0x2484f560  addiu       $a0, $a0, -0xAA0
    ctx->pc = 0x374c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964576));
    // 0x374c1c: 0xc049c86  jal         func_127218
    ctx->pc = 0x374C1Cu;
    SET_GPR_U32(ctx, 31, 0x374C24u);
    ctx->pc = 0x374C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374C1Cu;
            // 0x374c20: 0x240603d0  addiu       $a2, $zero, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C24u; }
        if (ctx->pc != 0x374C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C24u; }
        if (ctx->pc != 0x374C24u) { return; }
    }
    ctx->pc = 0x374C24u;
label_374c24:
    // 0x374c24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374c28: 0x3e00008  jr          $ra
    ctx->pc = 0x374C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374C28u;
            // 0x374c2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374C30u;
}
