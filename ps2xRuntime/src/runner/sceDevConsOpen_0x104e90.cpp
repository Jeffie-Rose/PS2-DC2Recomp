#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsOpen
// Address: 0x104e90 - 0x104f8c
void sceDevConsOpen_0x104e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsOpen_0x104e90");
#endif

    switch (ctx->pc) {
        case 0x104ef4u: goto label_104ef4;
        case 0x104f30u: goto label_104f30;
        case 0x104f60u: goto label_104f60;
        case 0x104f68u: goto label_104f68;
        default: break;
    }

    ctx->pc = 0x104e90u;

    // 0x104e90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x104e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x104e94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x104e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x104e98: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x104e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x104e9c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x104e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ea0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x104ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x104ea4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x104ea4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ea8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x104ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x104eac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x104eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104eb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104eb4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x104eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104eb8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x104eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x104ebc: 0x2e420051  sltiu       $v0, $s2, 0x51
    ctx->pc = 0x104ebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
    // 0x104ec0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x104EC0u;
    {
        const bool branch_taken_0x104ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104EC0u;
            // 0x104ec4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ec0) {
            ctx->pc = 0x104F38u;
            goto label_104f38;
        }
    }
    ctx->pc = 0x104EC8u;
    // 0x104ec8: 0x2e220041  sltiu       $v0, $s1, 0x41
    ctx->pc = 0x104ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x104ecc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x104ECCu;
    {
        const bool branch_taken_0x104ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104ECCu;
            // 0x104ed0: 0x3c070038  lui         $a3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ecc) {
            ctx->pc = 0x104F38u;
            goto label_104f38;
        }
    }
    ctx->pc = 0x104ED4u;
    // 0x104ed4: 0x24e38ad0  addiu       $v1, $a3, -0x7530
    ctx->pc = 0x104ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937296));
    // 0x104ed8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x104ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x104edc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104EDCu;
    {
        const bool branch_taken_0x104edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104EDCu;
            // 0x104ee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104edc) {
            ctx->pc = 0x104EF0u;
            goto label_104ef0;
        }
    }
    ctx->pc = 0x104EE4u;
    // 0x104ee4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x104EE4u;
    {
        const bool branch_taken_0x104ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104EE4u;
            // 0x104ee8: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ee4) {
            ctx->pc = 0x104F1Cu;
            goto label_104f1c;
        }
    }
    ctx->pc = 0x104EECu;
    // 0x104eec: 0x0  nop
    ctx->pc = 0x104eecu;
    // NOP
label_104ef0:
    // 0x104ef0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x104ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_104ef4:
    // 0x104ef4: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x104ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x104ef8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x104EF8u;
    {
        const bool branch_taken_0x104ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104EF8u;
            // 0x104efc: 0x24030058  addiu       $v1, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ef8) {
            ctx->pc = 0x104F1Cu;
            goto label_104f1c;
        }
    }
    ctx->pc = 0x104F00u;
    // 0x104f00: 0x24e68ad0  addiu       $a2, $a3, -0x7530
    ctx->pc = 0x104f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937296));
    // 0x104f04: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x104f04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x104f08: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x104f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x104f0c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x104f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x104f10: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x104F10u;
    {
        const bool branch_taken_0x104f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x104f10) {
            ctx->pc = 0x104F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104F10u;
            // 0x104f14: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x104EF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_104ef4;
        }
    }
    ctx->pc = 0x104F18u;
    // 0x104f18: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x104f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_104f1c:
    // 0x104f1c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x104F1Cu;
    {
        const bool branch_taken_0x104f1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104F1Cu;
            // 0x104f20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f1c) {
            ctx->pc = 0x104F6Cu;
            goto label_104f6c;
        }
    }
    ctx->pc = 0x104F24u;
    // 0x104f24: 0x2512018  mult        $a0, $s2, $s1
    ctx->pc = 0x104f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x104f28: 0xc041896  jal         func_106258
    ctx->pc = 0x104F28u;
    SET_GPR_U32(ctx, 31, 0x104F30u);
    ctx->pc = 0x104F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104F28u;
            // 0x104f2c: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106258u;
    if (runtime->hasFunction(0x106258u)) {
        auto targetFn = runtime->lookupFunction(0x106258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104F30u; }
        if (ctx->pc != 0x104F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chaMemAlloc_0x106258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104F30u; }
        if (ctx->pc != 0x104F30u) { return; }
    }
    ctx->pc = 0x104F30u;
label_104f30:
    // 0x104f30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104F30u;
    {
        const bool branch_taken_0x104f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104F30u;
            // 0x104f34: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f30) {
            ctx->pc = 0x104F40u;
            goto label_104f40;
        }
    }
    ctx->pc = 0x104F38u;
label_104f38:
    // 0x104f38: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x104F38u;
    {
        const bool branch_taken_0x104f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104F38u;
            // 0x104f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f38) {
            ctx->pc = 0x104F6Cu;
            goto label_104f6c;
        }
    }
    ctx->pc = 0x104F40u;
label_104f40:
    // 0x104f40: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x104f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x104f44: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x104f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x104f48: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x104f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x104f4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x104f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f50: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x104f50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x104f54: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x104f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f58: 0xc041356  jal         func_104D58
    ctx->pc = 0x104F58u;
    SET_GPR_U32(ctx, 31, 0x104F60u);
    ctx->pc = 0x104F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104F58u;
            // 0x104f5c: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104D58u;
    if (runtime->hasFunction(0x104D58u)) {
        auto targetFn = runtime->lookupFunction(0x104D58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104F60u; }
        if (ctx->pc != 0x104F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevFontDefault_0x104d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104F60u; }
        if (ctx->pc != 0x104F60u) { return; }
    }
    ctx->pc = 0x104F60u;
label_104f60:
    // 0x104f60: 0xc0414f8  jal         func_1053E0
    ctx->pc = 0x104F60u;
    SET_GPR_U32(ctx, 31, 0x104F68u);
    ctx->pc = 0x104F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104F60u;
            // 0x104f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1053E0u;
    if (runtime->hasFunction(0x1053E0u)) {
        auto targetFn = runtime->lookupFunction(0x1053E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104F68u; }
        if (ctx->pc != 0x104F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsClear_0x1053e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104F68u; }
        if (ctx->pc != 0x104F68u) { return; }
    }
    ctx->pc = 0x104F68u;
label_104f68:
    // 0x104f68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x104f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_104f6c:
    // 0x104f6c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x104f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104f70: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x104f70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104f74: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x104f74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104f78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104f78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104f7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104f80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104f84: 0x3e00008  jr          $ra
    ctx->pc = 0x104F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104F84u;
            // 0x104f88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x104F8Cu;
}
