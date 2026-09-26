#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPos__9CLaserGunFPfPfPf
// Address: 0x1b6e50 - 0x1b6f58
void SetPos__9CLaserGunFPfPfPf_0x1b6e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPos__9CLaserGunFPfPfPf_0x1b6e50");
#endif

    switch (ctx->pc) {
        case 0x1b6e7cu: goto label_1b6e7c;
        case 0x1b6e88u: goto label_1b6e88;
        case 0x1b6e94u: goto label_1b6e94;
        case 0x1b6ea0u: goto label_1b6ea0;
        case 0x1b6eacu: goto label_1b6eac;
        case 0x1b6ed0u: goto label_1b6ed0;
        case 0x1b6ee0u: goto label_1b6ee0;
        default: break;
    }

    ctx->pc = 0x1b6e50u;

    // 0x1b6e50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b6e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b6e54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b6e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b6e58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b6e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b6e5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b6e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b6e60: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b6e60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b6e68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b6e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6e70: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1b6e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e74: 0xc06df48  jal         func_1B7D20
    ctx->pc = 0x1B6E74u;
    SET_GPR_U32(ctx, 31, 0x1B6E7Cu);
    ctx->pc = 0x1B6E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E74u;
            // 0x1b6e78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7D20u;
    if (runtime->hasFunction(0x1B7D20u)) {
        auto targetFn = runtime->lookupFunction(0x1B7D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E7Cu; }
        if (ctx->pc != 0x1B6E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CLaserGunFv_0x1b7d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E7Cu; }
        if (ctx->pc != 0x1B6E7Cu) { return; }
    }
    ctx->pc = 0x1B6E7Cu;
label_1b6e7c:
    // 0x1b6e7c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1b6e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b6e80: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B6E80u;
    SET_GPR_U32(ctx, 31, 0x1B6E88u);
    ctx->pc = 0x1B6E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E80u;
            // 0x1b6e84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E88u; }
        if (ctx->pc != 0x1B6E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E88u; }
        if (ctx->pc != 0x1B6E88u) { return; }
    }
    ctx->pc = 0x1B6E88u;
label_1b6e88:
    // 0x1b6e88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b6e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e8c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B6E8Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E94u);
    ctx->pc = 0x1B6E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E8Cu;
            // 0x1b6e90: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E94u; }
        if (ctx->pc != 0x1B6E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E94u; }
        if (ctx->pc != 0x1B6E94u) { return; }
    }
    ctx->pc = 0x1B6E94u;
label_1b6e94:
    // 0x1b6e94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b6e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e98: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B6E98u;
    SET_GPR_U32(ctx, 31, 0x1B6EA0u);
    ctx->pc = 0x1B6E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E98u;
            // 0x1b6e9c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EA0u; }
        if (ctx->pc != 0x1B6EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EA0u; }
        if (ctx->pc != 0x1B6EA0u) { return; }
    }
    ctx->pc = 0x1B6EA0u;
label_1b6ea0:
    // 0x1b6ea0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ea4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B6EA4u;
    SET_GPR_U32(ctx, 31, 0x1B6EACu);
    ctx->pc = 0x1B6EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6EA4u;
            // 0x1b6ea8: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EACu; }
        if (ctx->pc != 0x1B6EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EACu; }
        if (ctx->pc != 0x1B6EACu) { return; }
    }
    ctx->pc = 0x1B6EACu;
label_1b6eac:
    // 0x1b6eac: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1b6eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1b6eb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6eb4: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x1b6eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x1b6eb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b6eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ebc: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b6ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b6ec0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b6ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ec4: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1b6ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1b6ec8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1b6ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1b6ecc: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1b6eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_1b6ed0:
    // 0x1b6ed0: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1b6ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1b6ed4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1b6ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b6ed8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B6ED8u;
    SET_GPR_U32(ctx, 31, 0x1B6EE0u);
    ctx->pc = 0x1B6EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6ED8u;
            // 0x1b6edc: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EE0u; }
        if (ctx->pc != 0x1B6EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EE0u; }
        if (ctx->pc != 0x1B6EE0u) { return; }
    }
    ctx->pc = 0x1B6EE0u;
label_1b6ee0:
    // 0x1b6ee0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b6ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b6ee4: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x1b6ee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b6ee8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B6EE8u;
    {
        const bool branch_taken_0x1b6ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6EE8u;
            // 0x1b6eec: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ee8) {
            ctx->pc = 0x1B6ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6ed0;
        }
    }
    ctx->pc = 0x1B6EF0u;
    // 0x1b6ef0: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1b6ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1b6ef4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1b6ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b6ef8: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x1b6ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x1b6efc: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x1b6efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x1b6f00: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1b6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b6f04: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1b6f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6f08: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x1b6f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x1b6f0c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1b6f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1b6f10: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x1b6f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x1b6f14: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x1b6f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x1b6f18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b6f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b6f1c: 0xae050114  sw          $a1, 0x114($s0)
    ctx->pc = 0x1b6f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 5));
    // 0x1b6f20: 0xae050118  sw          $a1, 0x118($s0)
    ctx->pc = 0x1b6f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 5));
    // 0x1b6f24: 0xae05011c  sw          $a1, 0x11C($s0)
    ctx->pc = 0x1b6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 5));
    // 0x1b6f28: 0xae0400fc  sw          $a0, 0xFC($s0)
    ctx->pc = 0x1b6f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 4));
    // 0x1b6f2c: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1b6f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1b6f30: 0xae040104  sw          $a0, 0x104($s0)
    ctx->pc = 0x1b6f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 4));
    // 0x1b6f34: 0xae0300ec  sw          $v1, 0xEC($s0)
    ctx->pc = 0x1b6f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 3));
    // 0x1b6f38: 0xa6000108  sh          $zero, 0x108($s0)
    ctx->pc = 0x1b6f38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 264), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b6f3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b6f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6f40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b6f40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6f44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6f48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6f50: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F50u;
            // 0x1b6f54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6F58u;
}
