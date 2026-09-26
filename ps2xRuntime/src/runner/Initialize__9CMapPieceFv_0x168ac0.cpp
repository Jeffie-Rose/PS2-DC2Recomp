#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CMapPieceFv
// Address: 0x168ac0 - 0x168b58
void Initialize__9CMapPieceFv_0x168ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CMapPieceFv_0x168ac0");
#endif

    switch (ctx->pc) {
        case 0x168adcu: goto label_168adc;
        case 0x168b08u: goto label_168b08;
        case 0x168b1cu: goto label_168b1c;
        default: break;
    }

    ctx->pc = 0x168ac0u;

    // 0x168ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x168ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x168ac4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x168ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x168ac8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168acc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168ad0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x168ad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ad4: 0xc05a84c  jal         func_16A130
    ctx->pc = 0x168AD4u;
    SET_GPR_U32(ctx, 31, 0x168ADCu);
    ctx->pc = 0x168AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168AD4u;
            // 0x168ad8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A130u;
    if (runtime->hasFunction(0x16A130u)) {
        auto targetFn = runtime->lookupFunction(0x16A130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168ADCu; }
        if (ctx->pc != 0x168ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CObjectFrameFv_0x16a130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168ADCu; }
        if (ctx->pc != 0x168ADCu) { return; }
    }
    ctx->pc = 0x168ADCu;
label_168adc:
    // 0x168adc: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x168adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
    // 0x168ae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168ae4: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x168ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x168ae8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x168ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168aec: 0xae430088  sw          $v1, 0x88($s2)
    ctx->pc = 0x168aecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 3));
    // 0x168af0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x168af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168af4: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x168af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
    // 0x168af8: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x168af8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x168afc: 0xa64000a0  sh          $zero, 0xA0($s2)
    ctx->pc = 0x168afcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 160), (uint16_t)GPR_U32(ctx, 0));
    // 0x168b00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x168B00u;
    {
        const bool branch_taken_0x168b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168B00u;
            // 0x168b04: 0xa64000a2  sh          $zero, 0xA2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 162), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b00) {
            ctx->pc = 0x168B24u;
            goto label_168b24;
        }
    }
    ctx->pc = 0x168B08u;
label_168b08:
    // 0x168b08: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x168b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x168b0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b10: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x168b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x168b14: 0xc049c86  jal         func_127218
    ctx->pc = 0x168B14u;
    SET_GPR_U32(ctx, 31, 0x168B1Cu);
    ctx->pc = 0x168B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168B14u;
            // 0x168b18: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B1Cu; }
        if (ctx->pc != 0x168B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B1Cu; }
        if (ctx->pc != 0x168B1Cu) { return; }
    }
    ctx->pc = 0x168B1Cu;
label_168b1c:
    // 0x168b1c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x168b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x168b20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x168b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_168b24:
    // 0x168b24: 0x0  nop
    ctx->pc = 0x168b24u;
    // NOP
    // 0x168b28: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x168b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x168b2c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x168b2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168b30: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x168B30u;
    {
        const bool branch_taken_0x168b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168b30) {
            ctx->pc = 0x168B08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_168b08;
        }
    }
    ctx->pc = 0x168B38u;
    // 0x168b38: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x168b38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x168b3c: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x168b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
    // 0x168b40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x168b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168b44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168b50: 0x3e00008  jr          $ra
    ctx->pc = 0x168B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168B50u;
            // 0x168b54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168B58u;
}
