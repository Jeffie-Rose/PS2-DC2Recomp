#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadHelpMes__FP1
// Address: 0x318ef0 - 0x318f80
void LoadHelpMes__FP1_0x318ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadHelpMes__FP1_0x318ef0");
#endif

    switch (ctx->pc) {
        case 0x318f14u: goto label_318f14;
        case 0x318f28u: goto label_318f28;
        case 0x318f54u: goto label_318f54;
        case 0x318f68u: goto label_318f68;
        default: break;
    }

    ctx->pc = 0x318ef0u;

    // 0x318ef0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x318ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x318ef4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x318ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x318ef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x318ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x318efc: 0x24a52970  addiu       $a1, $a1, 0x2970
    ctx->pc = 0x318efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10608));
    // 0x318f00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x318f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x318f04: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x318f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x318f08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x318f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318f0c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x318F0Cu;
    SET_GPR_U32(ctx, 31, 0x318F14u);
    ctx->pc = 0x318F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318F0Cu;
            // 0x318f10: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318F14u; }
        if (ctx->pc != 0x318F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318F14u; }
        if (ctx->pc != 0x318F14u) { return; }
    }
    ctx->pc = 0x318F14u;
label_318f14:
    // 0x318f14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x318f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x318f18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x318f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318f1c: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x318f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x318f20: 0xc0524dc  jal         func_149370
    ctx->pc = 0x318F20u;
    SET_GPR_U32(ctx, 31, 0x318F28u);
    ctx->pc = 0x318F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318F20u;
            // 0x318f24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318F28u; }
        if (ctx->pc != 0x318F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318F28u; }
        if (ctx->pc != 0x318F28u) { return; }
    }
    ctx->pc = 0x318F28u;
label_318f28:
    // 0x318f28: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x318F28u;
    {
        const bool branch_taken_0x318f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318f28) {
            ctx->pc = 0x318F70u;
            goto label_318f70;
        }
    }
    ctx->pc = 0x318F30u;
    // 0x318f30: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x318f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x318f34: 0x28c11001  slti        $at, $a2, 0x1001
    ctx->pc = 0x318f34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x318f38: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x318F38u;
    {
        const bool branch_taken_0x318f38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x318F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318F38u;
            // 0x318f3c: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f38) {
            ctx->pc = 0x318F5Cu;
            goto label_318f5c;
        }
    }
    ctx->pc = 0x318F40u;
    // 0x318f40: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x318f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x318f44: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x318f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318f48: 0x24842980  addiu       $a0, $a0, 0x2980
    ctx->pc = 0x318f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10624));
    // 0x318f4c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x318F4Cu;
    SET_GPR_U32(ctx, 31, 0x318F54u);
    ctx->pc = 0x318F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318F4Cu;
            // 0x318f50: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318F54u; }
        if (ctx->pc != 0x318F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318F54u; }
        if (ctx->pc != 0x318F54u) { return; }
    }
    ctx->pc = 0x318F54u;
label_318f54:
    // 0x318f54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x318F54u;
    {
        const bool branch_taken_0x318f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318F54u;
            // 0x318f58: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f54) {
            ctx->pc = 0x318F74u;
            goto label_318f74;
        }
    }
    ctx->pc = 0x318F5Cu;
label_318f5c:
    // 0x318f5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x318f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318f60: 0xc049c18  jal         func_127060
    ctx->pc = 0x318F60u;
    SET_GPR_U32(ctx, 31, 0x318F68u);
    ctx->pc = 0x318F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318F60u;
            // 0x318f64: 0x2484f9d0  addiu       $a0, $a0, -0x630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318F68u; }
        if (ctx->pc != 0x318F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318F68u; }
        if (ctx->pc != 0x318F68u) { return; }
    }
    ctx->pc = 0x318F68u;
label_318f68:
    // 0x318f68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x318f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318f6c: 0xaf83a324  sw          $v1, -0x5CDC($gp)
    ctx->pc = 0x318f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943524), GPR_U32(ctx, 3));
label_318f70:
    // 0x318f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x318f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_318f74:
    // 0x318f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x318f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318f78: 0x3e00008  jr          $ra
    ctx->pc = 0x318F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318F78u;
            // 0x318f7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x318F80u;
}
