#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitExecPS2
// Address: 0x118e50 - 0x118efc
void InitExecPS2_0x118e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitExecPS2_0x118e50");
#endif

    switch (ctx->pc) {
        case 0x118e68u: goto label_118e68;
        case 0x118e88u: goto label_118e88;
        case 0x118ea0u: goto label_118ea0;
        case 0x118ea8u: goto label_118ea8;
        case 0x118eb0u: goto label_118eb0;
        case 0x118ebcu: goto label_118ebc;
        case 0x118ec0u: goto label_118ec0;
        case 0x118ec8u: goto label_118ec8;
        case 0x118ed8u: goto label_118ed8;
        default: break;
    }

    ctx->pc = 0x118e50u;

    // 0x118e50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118e54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118e58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118e5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118e60: 0xc04637a  jal         func_118DE8
    ctx->pc = 0x118E60u;
    SET_GPR_U32(ctx, 31, 0x118E68u);
    ctx->pc = 0x118E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118E60u;
            // 0x118e64: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DE8u;
    if (runtime->hasFunction(0x118DE8u)) {
        auto targetFn = runtime->lookupFunction(0x118DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E68u; }
        if (ctx->pc != 0x118E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PatchIsNeeded_0x118de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E68u; }
        if (ctx->pc != 0x118E68u) { return; }
    }
    ctx->pc = 0x118E68u;
label_118e68:
    // 0x118e68: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x118E68u;
    {
        const bool branch_taken_0x118e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118E68u;
            // 0x118e6c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e68) {
            ctx->pc = 0x118EE4u;
            goto label_118ee4;
        }
    }
    ctx->pc = 0x118E70u;
    // 0x118e70: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x118e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x118e74: 0x24501d48  addiu       $s0, $v0, 0x1D48
    ctx->pc = 0x118e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7496));
    // 0x118e78: 0x8c441d48  lw          $a0, 0x1D48($v0)
    ctx->pc = 0x118e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7496)));
    // 0x118e7c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x118e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x118e80: 0xc046360  jal         func_118D80
    ctx->pc = 0x118E80u;
    SET_GPR_U32(ctx, 31, 0x118E88u);
    ctx->pc = 0x118E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118E80u;
            // 0x118e84: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118D80u;
    if (runtime->hasFunction(0x118D80u)) {
        auto targetFn = runtime->lookupFunction(0x118D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E88u; }
        if (ctx->pc != 0x118E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x118d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E88u; }
        if (ctx->pc != 0x118E88u) { return; }
    }
    ctx->pc = 0x118E88u;
label_118e88:
    // 0x118e88: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x118e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x118e8c: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x118e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x118e90: 0x240607a8  addiu       $a2, $zero, 0x7A8
    ctx->pc = 0x118e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x118e94: 0x24a515a0  addiu       $a1, $a1, 0x15A0
    ctx->pc = 0x118e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5536));
    // 0x118e98: 0xc046364  jal         func_118D90
    ctx->pc = 0x118E98u;
    SET_GPR_U32(ctx, 31, 0x118EA0u);
    ctx->pc = 0x118E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118E98u;
            // 0x118e9c: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
    ctx->pc = 0x118D90u;
    if (runtime->hasFunction(0x118D90u)) {
        auto targetFn = runtime->lookupFunction(0x118D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EA0u; }
        if (ctx->pc != 0x118EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy_0x118d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EA0u; }
        if (ctx->pc != 0x118EA0u) { return; }
    }
    ctx->pc = 0x118EA0u;
label_118ea0:
    // 0x118ea0: 0xc0440d8  jal         func_110360
    ctx->pc = 0x118EA0u;
    SET_GPR_U32(ctx, 31, 0x118EA8u);
    ctx->pc = 0x118EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118EA0u;
            // 0x118ea4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EA8u; }
        if (ctx->pc != 0x118EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EA8u; }
        if (ctx->pc != 0x118EA8u) { return; }
    }
    ctx->pc = 0x118EA8u;
label_118ea8:
    // 0x118ea8: 0xc0440d8  jal         func_110360
    ctx->pc = 0x118EA8u;
    SET_GPR_U32(ctx, 31, 0x118EB0u);
    ctx->pc = 0x118EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118EA8u;
            // 0x118eac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EB0u; }
        if (ctx->pc != 0x118EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EB0u; }
        if (ctx->pc != 0x118EB0u) { return; }
    }
    ctx->pc = 0x118EB0u;
label_118eb0:
    // 0x118eb0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x118eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x118eb4: 0xc046360  jal         func_118D80
    ctx->pc = 0x118EB4u;
    SET_GPR_U32(ctx, 31, 0x118EBCu);
    ctx->pc = 0x118EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118EB4u;
            // 0x118eb8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118D80u;
    if (runtime->hasFunction(0x118D80u)) {
        auto targetFn = runtime->lookupFunction(0x118D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EBCu; }
        if (ctx->pc != 0x118EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x118d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EBCu; }
        if (ctx->pc != 0x118EBCu) { return; }
    }
    ctx->pc = 0x118EBCu;
label_118ebc:
    // 0x118ebc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x118ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_118ec0:
    // 0x118ec0: 0xc046376  jal         func_118DD8
    ctx->pc = 0x118EC0u;
    SET_GPR_U32(ctx, 31, 0x118EC8u);
    ctx->pc = 0x118EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118EC0u;
            // 0x118ec4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EC8u; }
        if (ctx->pc != 0x118EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryAddress_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EC8u; }
        if (ctx->pc != 0x118EC8u) { return; }
    }
    ctx->pc = 0x118EC8u;
label_118ec8:
    // 0x118ec8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x118ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x118ecc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x118eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ed0: 0xc046360  jal         func_118D80
    ctx->pc = 0x118ED0u;
    SET_GPR_U32(ctx, 31, 0x118ED8u);
    ctx->pc = 0x118ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118ED0u;
            // 0x118ed4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118D80u;
    if (runtime->hasFunction(0x118D80u)) {
        auto targetFn = runtime->lookupFunction(0x118D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118ED8u; }
        if (ctx->pc != 0x118ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x118d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118ED8u; }
        if (ctx->pc != 0x118ED8u) { return; }
    }
    ctx->pc = 0x118ED8u;
label_118ed8:
    // 0x118ed8: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x118ed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x118edc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x118EDCu;
    {
        const bool branch_taken_0x118edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118edc) {
            ctx->pc = 0x118EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118EDCu;
            // 0x118ee0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_118ec0;
        }
    }
    ctx->pc = 0x118EE4u;
label_118ee4:
    // 0x118ee4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118ee8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118ee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118eec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118eecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118ef0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x118EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118EF4u;
            // 0x118ef8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118EFCu;
}
