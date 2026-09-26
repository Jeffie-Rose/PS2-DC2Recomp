#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyDataGiftBox__13CGameDataUsedFi
// Address: 0x199ed0 - 0x199f38
void CopyDataGiftBox__13CGameDataUsedFi_0x199ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyDataGiftBox__13CGameDataUsedFi_0x199ed0");
#endif

    switch (ctx->pc) {
        case 0x199ef0u: goto label_199ef0;
        case 0x199f10u: goto label_199f10;
        default: break;
    }

    ctx->pc = 0x199ed0u;

    // 0x199ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x199ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x199ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x199ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x199ee0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ee4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x199ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ee8: 0xc06570c  jal         func_195C30
    ctx->pc = 0x199EE8u;
    SET_GPR_U32(ctx, 31, 0x199EF0u);
    ctx->pc = 0x199EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199EE8u;
            // 0x199eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C30u;
    if (runtime->hasFunction(0x195C30u)) {
        auto targetFn = runtime->lookupFunction(0x195C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199EF0u; }
        if (ctx->pc != 0x199EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemInfoData__Fi_0x195c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199EF0u; }
        if (ctx->pc != 0x199EF0u) { return; }
    }
    ctx->pc = 0x199EF0u;
label_199ef0:
    // 0x199ef0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199EF0u;
    {
        const bool branch_taken_0x199ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199EF0u;
            // 0x199ef4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ef0) {
            ctx->pc = 0x199F00u;
            goto label_199f00;
        }
    }
    ctx->pc = 0x199EF8u;
    // 0x199ef8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x199EF8u;
    {
        const bool branch_taken_0x199ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199EF8u;
            // 0x199efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ef8) {
            ctx->pc = 0x199F24u;
            goto label_199f24;
        }
    }
    ctx->pc = 0x199F00u;
label_199f00:
    // 0x199f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f04: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x199f04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x199f08: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x199F08u;
    SET_GPR_U32(ctx, 31, 0x199F10u);
    ctx->pc = 0x199F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199F08u;
            // 0x199f0c: 0xa6300002  sh          $s0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F10u; }
        if (ctx->pc != 0x199F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F10u; }
        if (ctx->pc != 0x199F10u) { return; }
    }
    ctx->pc = 0x199F10u;
label_199f10:
    // 0x199f10: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x199f10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x199f14: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x199f14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x199f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199f1c: 0xa6200012  sh          $zero, 0x12($s1)
    ctx->pc = 0x199f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x199f20: 0xa6200010  sh          $zero, 0x10($s1)
    ctx->pc = 0x199f20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 0));
label_199f24:
    // 0x199f24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x199f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199f28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199f30: 0x3e00008  jr          $ra
    ctx->pc = 0x199F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199F30u;
            // 0x199f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199F38u;
}
