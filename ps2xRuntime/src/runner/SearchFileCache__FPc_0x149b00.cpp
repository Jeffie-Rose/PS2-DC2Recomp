#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchFileCache__FPc
// Address: 0x149b00 - 0x149b84
void SearchFileCache__FPc_0x149b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchFileCache__FPc_0x149b00");
#endif

    switch (ctx->pc) {
        case 0x149b34u: goto label_149b34;
        case 0x149b48u: goto label_149b48;
        default: break;
    }

    ctx->pc = 0x149b00u;

    // 0x149b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149b04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x149b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x149b08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149b0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149b10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149b14: 0x8f8288b4  lw          $v0, -0x774C($gp)
    ctx->pc = 0x149b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936756)));
    // 0x149b18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149B18u;
    {
        const bool branch_taken_0x149b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149B18u;
            // 0x149b1c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b18) {
            ctx->pc = 0x149B28u;
            goto label_149b28;
        }
    }
    ctx->pc = 0x149B20u;
    // 0x149b20: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x149B20u;
    {
        const bool branch_taken_0x149b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149B20u;
            // 0x149b24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b20) {
            ctx->pc = 0x149B6Cu;
            goto label_149b6c;
        }
    }
    ctx->pc = 0x149B28u;
label_149b28:
    // 0x149b28: 0x3c11003d  lui         $s1, 0x3D
    ctx->pc = 0x149b28u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)61 << 16));
    // 0x149b2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x149b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b30: 0x2631ac90  addiu       $s1, $s1, -0x5370
    ctx->pc = 0x149b30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945936));
label_149b34:
    // 0x149b34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x149b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149b38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149B38u;
    {
        const bool branch_taken_0x149b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149B38u;
            // 0x149b3c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b38) {
            ctx->pc = 0x149B58u;
            goto label_149b58;
        }
    }
    ctx->pc = 0x149B40u;
    // 0x149b40: 0xc04a2ac  jal         func_128AB0
    ctx->pc = 0x149B40u;
    SET_GPR_U32(ctx, 31, 0x149B48u);
    ctx->pc = 0x149B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149B40u;
            // 0x149b44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128AB0u;
    if (runtime->hasFunction(0x128AB0u)) {
        auto targetFn = runtime->lookupFunction(0x128AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B48u; }
        if (ctx->pc != 0x149B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x128ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B48u; }
        if (ctx->pc != 0x149B48u) { return; }
    }
    ctx->pc = 0x149B48u;
label_149b48:
    // 0x149b48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149B48u;
    {
        const bool branch_taken_0x149b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149B48u;
            // 0x149b4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b48) {
            ctx->pc = 0x149B58u;
            goto label_149b58;
        }
    }
    ctx->pc = 0x149B50u;
    // 0x149b50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x149B50u;
    {
        const bool branch_taken_0x149b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149B50u;
            // 0x149b54: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b50) {
            ctx->pc = 0x149B70u;
            goto label_149b70;
        }
    }
    ctx->pc = 0x149B58u;
label_149b58:
    // 0x149b58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x149b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x149b5c: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x149b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x149b60: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x149B60u;
    {
        const bool branch_taken_0x149b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149B60u;
            // 0x149b64: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b60) {
            ctx->pc = 0x149B34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149b34;
        }
    }
    ctx->pc = 0x149B68u;
    // 0x149b68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x149b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149b6c:
    // 0x149b6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x149b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_149b70:
    // 0x149b70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149b78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x149B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149B7Cu;
            // 0x149b80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149B84u;
}
