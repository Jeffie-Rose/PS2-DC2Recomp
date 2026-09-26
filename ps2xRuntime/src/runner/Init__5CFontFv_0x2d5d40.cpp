#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__5CFontFv
// Address: 0x2d5d40 - 0x2d5dbc
void Init__5CFontFv_0x2d5d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__5CFontFv_0x2d5d40");
#endif

    switch (ctx->pc) {
        case 0x2d5d5cu: goto label_2d5d5c;
        case 0x2d5d68u: goto label_2d5d68;
        default: break;
    }

    ctx->pc = 0x2d5d40u;

    // 0x2d5d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d5d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d5d44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d5d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d5d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d5d4c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2d5d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d5d50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d5d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d5d54: 0xc049c86  jal         func_127218
    ctx->pc = 0x2D5D54u;
    SET_GPR_U32(ctx, 31, 0x2D5D5Cu);
    ctx->pc = 0x2D5D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5D54u;
            // 0x2d5d58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5D5Cu; }
        if (ctx->pc != 0x2D5D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5D5Cu; }
        if (ctx->pc != 0x2D5D5Cu) { return; }
    }
    ctx->pc = 0x2D5D5Cu;
label_2d5d5c:
    // 0x2d5d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d60: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x2D5D60u;
    SET_GPR_U32(ctx, 31, 0x2D5D68u);
    ctx->pc = 0x2D5D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5D60u;
            // 0x2d5d64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5D68u; }
        if (ctx->pc != 0x2D5D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5D68u; }
        if (ctx->pc != 0x2D5D68u) { return; }
    }
    ctx->pc = 0x2D5D68u;
label_2d5d68:
    // 0x2d5d68: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2d5d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d5d6c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2d5d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d5d70: 0xa207008b  sb          $a3, 0x8B($s0)
    ctx->pc = 0x2d5d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 139), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d5d74: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2d5d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d5d78: 0xa207008a  sb          $a3, 0x8A($s0)
    ctx->pc = 0x2d5d78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 138), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d5d7c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2d5d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d5d80: 0xa2070089  sb          $a3, 0x89($s0)
    ctx->pc = 0x2d5d80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 137), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d5d84: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2d5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d5d88: 0xa2070088  sb          $a3, 0x88($s0)
    ctx->pc = 0x2d5d88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d5d8c: 0xae070090  sw          $a3, 0x90($s0)
    ctx->pc = 0x2d5d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 7));
    // 0x2d5d90: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x2d5d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x2d5d94: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x2d5d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x2d5d98: 0xae06009c  sw          $a2, 0x9C($s0)
    ctx->pc = 0x2d5d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 6));
    // 0x2d5d9c: 0xae0500a0  sw          $a1, 0xA0($s0)
    ctx->pc = 0x2d5d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 5));
    // 0x2d5da0: 0xae0400a4  sw          $a0, 0xA4($s0)
    ctx->pc = 0x2d5da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 4));
    // 0x2d5da4: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x2d5da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x2d5da8: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2d5da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2d5dac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d5dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5db0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d5db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5db4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5DB4u;
            // 0x2d5db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D5DBCu;
}
