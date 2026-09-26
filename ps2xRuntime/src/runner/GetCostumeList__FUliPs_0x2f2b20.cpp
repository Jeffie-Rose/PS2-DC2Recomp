#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCostumeList__FUliPs
// Address: 0x2f2b20 - 0x2f2be8
void GetCostumeList__FUliPs_0x2f2b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCostumeList__FUliPs_0x2f2b20");
#endif

    switch (ctx->pc) {
        case 0x2f2b70u: goto label_2f2b70;
        case 0x2f2b84u: goto label_2f2b84;
        default: break;
    }

    ctx->pc = 0x2f2b20u;

    // 0x2f2b20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f2b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f2b24: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f2b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f2b28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f2b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2f2b2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f2b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2f2b30: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2f2b30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f2b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f2b38: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2f2b38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f2b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f2b40: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2f2b40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f2b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f2b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f2b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f2b4c: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2B4Cu;
    {
        const bool branch_taken_0x2f2b4c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2B4Cu;
            // 0x2f2b50: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b4c) {
            ctx->pc = 0x2F2B5Cu;
            goto label_2f2b5c;
        }
    }
    ctx->pc = 0x2F2B54u;
    // 0x2f2b54: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2F2B54u;
    {
        const bool branch_taken_0x2f2b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2B54u;
            // 0x2f2b58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b54) {
            ctx->pc = 0x2F2BC0u;
            goto label_2f2bc0;
        }
    }
    ctx->pc = 0x2F2B5Cu;
label_2f2b5c:
    // 0x2f2b5c: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x2f2b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x2f2b60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f2b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b64: 0x2631cc40  addiu       $s1, $s1, -0x33C0
    ctx->pc = 0x2f2b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954048));
    // 0x2f2b68: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f2b68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2b6c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f2b6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b70:
    // 0x2f2b70: 0x2d21024  and         $v0, $s6, $s2
    ctx->pc = 0x2f2b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 18));
    // 0x2f2b74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2B74u;
    {
        const bool branch_taken_0x2f2b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b74) {
            ctx->pc = 0x2F2B9Cu;
            goto label_2f2b9c;
        }
    }
    ctx->pc = 0x2F2B7Cu;
    // 0x2f2b7c: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x2F2B7Cu;
    SET_GPR_U32(ctx, 31, 0x2F2B84u);
    ctx->pc = 0x2F2B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2B7Cu;
            // 0x2f2b80: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2B84u; }
        if (ctx->pc != 0x2F2B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2B84u; }
        if (ctx->pc != 0x2F2B84u) { return; }
    }
    ctx->pc = 0x2F2B84u;
label_2f2b84:
    // 0x2f2b84: 0x16a20005  bne         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2B84u;
    {
        const bool branch_taken_0x2f2b84 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f2b84) {
            ctx->pc = 0x2F2B9Cu;
            goto label_2f2b9c;
        }
    }
    ctx->pc = 0x2F2B8Cu;
    // 0x2f2b8c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x2f2b8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f2b90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f2b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f2b94: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x2f2b94u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f2b98: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x2f2b98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_2f2b9c:
    // 0x2f2b9c: 0x0  nop
    ctx->pc = 0x2f2b9cu;
    // NOP
    // 0x2f2ba0: 0x66730001  daddiu      $s3, $s3, 0x1
    ctx->pc = 0x2f2ba0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)1);
    // 0x2f2ba4: 0x2e620022  sltiu       $v0, $s3, 0x22
    ctx->pc = 0x2f2ba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x2f2ba8: 0x129078  dsll        $s2, $s2, 1
    ctx->pc = 0x2f2ba8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 1);
    // 0x2f2bac: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2F2BACu;
    {
        const bool branch_taken_0x2f2bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2BACu;
            // 0x2f2bb0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2bac) {
            ctx->pc = 0x2F2B70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f2b70;
        }
    }
    ctx->pc = 0x2F2BB4u;
    // 0x2f2bb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f2bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2bb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f2bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2bbc: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x2f2bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
label_2f2bc0:
    // 0x2f2bc0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f2bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f2bc4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f2bc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2bc8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f2bc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2bcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f2bccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2bd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f2bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2bd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f2bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f2bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f2bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2be0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2BE0u;
            // 0x2f2be4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F2BE8u;
}
