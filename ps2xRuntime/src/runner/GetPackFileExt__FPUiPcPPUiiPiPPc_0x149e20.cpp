#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPackFileExt__FPUiPcPPUiiPiPPc
// Address: 0x149e20 - 0x149f64
void GetPackFileExt__FPUiPcPPUiiPiPPc_0x149e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPackFileExt__FPUiPcPPUiiPiPPc_0x149e20");
#endif

    switch (ctx->pc) {
        case 0x149e70u: goto label_149e70;
        case 0x149e84u: goto label_149e84;
        case 0x149e9cu: goto label_149e9c;
        case 0x149ed8u: goto label_149ed8;
        default: break;
    }

    ctx->pc = 0x149e20u;

    // 0x149e20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x149e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x149e24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x149e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x149e28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x149e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x149e2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x149e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x149e30: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x149e30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e34: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x149e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x149e38: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x149e38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x149e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x149e40: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x149e40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x149e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x149e48: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x149e48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x149e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x149e50: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x149e50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149e58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x149e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149e60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149e64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x149e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e68: 0xafa700a4  sw          $a3, 0xA4($sp)
    ctx->pc = 0x149e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 7));
    // 0x149e6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x149e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149e70:
    // 0x149e70: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x149e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x149e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e78: 0x27a600ac  addiu       $a2, $sp, 0xAC
    ctx->pc = 0x149e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x149e7c: 0xc052770  jal         func_149DC0
    ctx->pc = 0x149E7Cu;
    SET_GPR_U32(ctx, 31, 0x149E84u);
    ctx->pc = 0x149E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149E7Cu;
            // 0x149e80: 0x27a700a8  addiu       $a3, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DC0u;
    if (runtime->hasFunction(0x149DC0u)) {
        auto targetFn = runtime->lookupFunction(0x149DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E84u; }
        if (ctx->pc != 0x149E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiiPPcPi_0x149dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E84u; }
        if (ctx->pc != 0x149E84u) { return; }
    }
    ctx->pc = 0x149E84u;
label_149e84:
    // 0x149e84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x149e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e88: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x149E88u;
    {
        const bool branch_taken_0x149e88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x149e88) {
            ctx->pc = 0x149F30u;
            goto label_149f30;
        }
    }
    ctx->pc = 0x149E90u;
    // 0x149e90: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x149e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x149e94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x149E94u;
    {
        const bool branch_taken_0x149e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149E94u;
            // 0x149e98: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e94) {
            ctx->pc = 0x149EBCu;
            goto label_149ebc;
        }
    }
    ctx->pc = 0x149E9Cu;
label_149e9c:
    // 0x149e9c: 0x0  nop
    ctx->pc = 0x149e9cu;
    // NOP
    // 0x149ea0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x149ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x149ea4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x149ea4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x149ea8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149EA8u;
    {
        const bool branch_taken_0x149ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x149ea8) {
            ctx->pc = 0x149EB8u;
            goto label_149eb8;
        }
    }
    ctx->pc = 0x149EB0u;
    // 0x149eb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x149EB0u;
    {
        const bool branch_taken_0x149eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149EB0u;
            // 0x149eb4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149eb0) {
            ctx->pc = 0x149ECCu;
            goto label_149ecc;
        }
    }
    ctx->pc = 0x149EB8u;
label_149eb8:
    // 0x149eb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x149eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_149ebc:
    // 0x149ebc: 0x0  nop
    ctx->pc = 0x149ebcu;
    // NOP
    // 0x149ec0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x149ec0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149ec4: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x149EC4u;
    {
        const bool branch_taken_0x149ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x149ec4) {
            ctx->pc = 0x149E9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149e9c;
        }
    }
    ctx->pc = 0x149ECCu;
label_149ecc:
    // 0x149ecc: 0x0  nop
    ctx->pc = 0x149eccu;
    // NOP
    // 0x149ed0: 0xc04a2ac  jal         func_128AB0
    ctx->pc = 0x149ED0u;
    SET_GPR_U32(ctx, 31, 0x149ED8u);
    ctx->pc = 0x149ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149ED0u;
            // 0x149ed4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128AB0u;
    if (runtime->hasFunction(0x128AB0u)) {
        auto targetFn = runtime->lookupFunction(0x128AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149ED8u; }
        if (ctx->pc != 0x149ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x128ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149ED8u; }
        if (ctx->pc != 0x149ED8u) { return; }
    }
    ctx->pc = 0x149ED8u;
label_149ed8:
    // 0x149ed8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x149ED8u;
    {
        const bool branch_taken_0x149ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149ED8u;
            // 0x149edc: 0x3d31021  addu        $v0, $fp, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ed8) {
            ctx->pc = 0x149F24u;
            goto label_149f24;
        }
    }
    ctx->pc = 0x149EE0u;
    // 0x149ee0: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x149EE0u;
    {
        const bool branch_taken_0x149ee0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x149EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149EE0u;
            // 0x149ee4: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ee0) {
            ctx->pc = 0x149EF4u;
            goto label_149ef4;
        }
    }
    ctx->pc = 0x149EE8u;
    // 0x149ee8: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x149ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x149eec: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x149eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x149ef0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_149ef4:
    // 0x149ef4: 0x0  nop
    ctx->pc = 0x149ef4u;
    // NOP
    // 0x149ef8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x149EF8u;
    {
        const bool branch_taken_0x149ef8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x149ef8) {
            ctx->pc = 0x149F0Cu;
            goto label_149f0c;
        }
    }
    ctx->pc = 0x149F00u;
    // 0x149f00: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x149f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x149f04: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x149f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x149f08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149f08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_149f0c:
    // 0x149f0c: 0x0  nop
    ctx->pc = 0x149f0cu;
    // NOP
    // 0x149f10: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x149f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x149f14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x149f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x149f18: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x149f18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149f1c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x149F1Cu;
    {
        const bool branch_taken_0x149f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149F1Cu;
            // 0x149f20: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f1c) {
            ctx->pc = 0x149F30u;
            goto label_149f30;
        }
    }
    ctx->pc = 0x149F24u;
label_149f24:
    // 0x149f24: 0x0  nop
    ctx->pc = 0x149f24u;
    // NOP
    // 0x149f28: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x149F28u;
    {
        const bool branch_taken_0x149f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149F28u;
            // 0x149f2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f28) {
            ctx->pc = 0x149E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149e70;
        }
    }
    ctx->pc = 0x149F30u;
label_149f30:
    // 0x149f30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x149f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f34: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x149f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x149f38: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x149f38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x149f3c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x149f3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x149f40: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x149f40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x149f44: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x149f44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x149f48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x149f48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149f4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x149f4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149f50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149f50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149f54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x149F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149F5Cu;
            // 0x149f60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149F64u;
}
