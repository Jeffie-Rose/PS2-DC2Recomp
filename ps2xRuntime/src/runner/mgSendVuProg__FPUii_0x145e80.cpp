#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSendVuProg__FPUii
// Address: 0x145e80 - 0x145ef8
void mgSendVuProg__FPUii_0x145e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSendVuProg__FPUii_0x145e80");
#endif

    switch (ctx->pc) {
        case 0x145ea0u: goto label_145ea0;
        case 0x145ec8u: goto label_145ec8;
        default: break;
    }

    ctx->pc = 0x145e80u;

    // 0x145e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x145e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x145e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145e90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x145e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x145e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e98: 0xc051760  jal         func_145D80
    ctx->pc = 0x145E98u;
    SET_GPR_U32(ctx, 31, 0x145EA0u);
    ctx->pc = 0x145E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E98u;
            // 0x145e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145D80u;
    if (runtime->hasFunction(0x145D80u)) {
        auto targetFn = runtime->lookupFunction(0x145D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145EA0u; }
        if (ctx->pc != 0x145EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckVuProgID__Fi_0x145d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145EA0u; }
        if (ctx->pc != 0x145EA0u) { return; }
    }
    ctx->pc = 0x145EA0u;
label_145ea0:
    // 0x145ea0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145EA0u;
    {
        const bool branch_taken_0x145ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145EA0u;
            // 0x145ea4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ea0) {
            ctx->pc = 0x145EB4u;
            goto label_145eb4;
        }
    }
    ctx->pc = 0x145EA8u;
    // 0x145ea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x145ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145eac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x145EACu;
    {
        const bool branch_taken_0x145eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145EACu;
            // 0x145eb0: 0xaf838020  sw          $v1, -0x7FE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145eac) {
            ctx->pc = 0x145EE4u;
            goto label_145ee4;
        }
    }
    ctx->pc = 0x145EB4u;
label_145eb4:
    // 0x145eb4: 0x8f828020  lw          $v0, -0x7FE0($gp)
    ctx->pc = 0x145eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934560)));
    // 0x145eb8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x145EB8u;
    {
        const bool branch_taken_0x145eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x145EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145EB8u;
            // 0x145ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145eb8) {
            ctx->pc = 0x145EE4u;
            goto label_145ee4;
        }
    }
    ctx->pc = 0x145EC0u;
    // 0x145ec0: 0xc051788  jal         func_145E20
    ctx->pc = 0x145EC0u;
    SET_GPR_U32(ctx, 31, 0x145EC8u);
    ctx->pc = 0x145E20u;
    if (runtime->hasFunction(0x145E20u)) {
        auto targetFn = runtime->lookupFunction(0x145E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145EC8u; }
        if (ctx->pc != 0x145EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetVuProgPacket__Fi_0x145e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145EC8u; }
        if (ctx->pc != 0x145EC8u) { return; }
    }
    ctx->pc = 0x145EC8u;
label_145ec8:
    // 0x145ec8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x145ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x145ecc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x145eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x145ed0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x145ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x145ed4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x145ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x145ed8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x145ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x145edc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x145edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x145ee0: 0xaf908020  sw          $s0, -0x7FE0($gp)
    ctx->pc = 0x145ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934560), GPR_U32(ctx, 16));
label_145ee4:
    // 0x145ee4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x145ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x145EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145EF0u;
            // 0x145ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145EF8u;
}
