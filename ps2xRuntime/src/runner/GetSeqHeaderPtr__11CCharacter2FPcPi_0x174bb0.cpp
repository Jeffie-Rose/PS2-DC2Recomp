#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSeqHeaderPtr__11CCharacter2FPcPi
// Address: 0x174bb0 - 0x174c70
void GetSeqHeaderPtr__11CCharacter2FPcPi_0x174bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSeqHeaderPtr__11CCharacter2FPcPi_0x174bb0");
#endif

    switch (ctx->pc) {
        case 0x174be4u: goto label_174be4;
        case 0x174bfcu: goto label_174bfc;
        case 0x174c0cu: goto label_174c0c;
        default: break;
    }

    ctx->pc = 0x174bb0u;

    // 0x174bb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x174bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x174bb4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x174bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x174bb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x174bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x174bbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x174bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x174bc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x174bc4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x174bc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x174bcc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x174bccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174bd4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x174bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174bdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x174bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174be0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x174be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174be4:
    // 0x174be4: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x174be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x174be8: 0x8c550550  lw          $s5, 0x550($v0)
    ctx->pc = 0x174be8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
    // 0x174bec: 0x12a00011  beqz        $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x174BECu;
    {
        const bool branch_taken_0x174bec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x174bec) {
            ctx->pc = 0x174C34u;
            goto label_174c34;
        }
    }
    ctx->pc = 0x174BF4u;
    // 0x174bf4: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x174BF4u;
    {
        const bool branch_taken_0x174bf4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x174bf4) {
            ctx->pc = 0x174C34u;
            goto label_174c34;
        }
    }
    ctx->pc = 0x174BFCu;
label_174bfc:
    // 0x174bfc: 0x0  nop
    ctx->pc = 0x174bfcu;
    // NOP
    // 0x174c00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x174c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c04: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x174C04u;
    SET_GPR_U32(ctx, 31, 0x174C0Cu);
    ctx->pc = 0x174C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174C04u;
            // 0x174c08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C0Cu; }
        if (ctx->pc != 0x174C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C0Cu; }
        if (ctx->pc != 0x174C0Cu) { return; }
    }
    ctx->pc = 0x174C0Cu;
label_174c0c:
    // 0x174c0c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174C0Cu;
    {
        const bool branch_taken_0x174c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174c0c) {
            ctx->pc = 0x174C28u;
            goto label_174c28;
        }
    }
    ctx->pc = 0x174C14u;
    // 0x174c14: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x174C14u;
    {
        const bool branch_taken_0x174c14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174C14u;
            // 0x174c18: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c14) {
            ctx->pc = 0x174C20u;
            goto label_174c20;
        }
    }
    ctx->pc = 0x174C1Cu;
    // 0x174c1c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x174c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_174c20:
    // 0x174c20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x174C20u;
    {
        const bool branch_taken_0x174c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174C20u;
            // 0x174c24: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c20) {
            ctx->pc = 0x174C50u;
            goto label_174c50;
        }
    }
    ctx->pc = 0x174C28u;
label_174c28:
    // 0x174c28: 0x8eb50028  lw          $s5, 0x28($s5)
    ctx->pc = 0x174c28u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x174c2c: 0x16a0fff3  bnez        $s5, . + 4 + (-0xD << 2)
    ctx->pc = 0x174C2Cu;
    {
        const bool branch_taken_0x174c2c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x174c2c) {
            ctx->pc = 0x174BFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174bfc;
        }
    }
    ctx->pc = 0x174C34u;
label_174c34:
    // 0x174c34: 0x0  nop
    ctx->pc = 0x174c34u;
    // NOP
    // 0x174c38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x174c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x174c3c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x174c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x174c40: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x174C40u;
    {
        const bool branch_taken_0x174c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174C40u;
            // 0x174c44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c40) {
            ctx->pc = 0x174BE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174be4;
        }
    }
    ctx->pc = 0x174C48u;
    // 0x174c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c4c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x174c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_174c50:
    // 0x174c50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x174c50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174c54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x174c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174c58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174c5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174c5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174c60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174c64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174c68: 0x3e00008  jr          $ra
    ctx->pc = 0x174C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174C68u;
            // 0x174c6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174C70u;
}
