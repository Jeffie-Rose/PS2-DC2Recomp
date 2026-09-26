#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvertAscii2ShitJiss__FPcPc
// Address: 0x30aef0 - 0x30af70
void ConvertAscii2ShitJiss__FPcPc_0x30aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvertAscii2ShitJiss__FPcPc_0x30aef0");
#endif

    switch (ctx->pc) {
        case 0x30af18u: goto label_30af18;
        case 0x30af20u: goto label_30af20;
        default: break;
    }

    ctx->pc = 0x30aef0u;

    // 0x30aef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30aef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30aef4: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x30AEF4u;
    {
        const bool branch_taken_0x30aef4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AEF4u;
            // 0x30aef8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aef4) {
            ctx->pc = 0x30AF64u;
            goto label_30af64;
        }
    }
    ctx->pc = 0x30AEFCu;
    // 0x30aefc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30AEFCu;
    {
        const bool branch_taken_0x30aefc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AEFCu;
            // 0x30af00: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aefc) {
            ctx->pc = 0x30AF10u;
            goto label_30af10;
        }
    }
    ctx->pc = 0x30AF04u;
    // 0x30af04: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30AF04u;
    {
        const bool branch_taken_0x30af04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AF04u;
            // 0x30af08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30af04) {
            ctx->pc = 0x30AF68u;
            goto label_30af68;
        }
    }
    ctx->pc = 0x30AF0Cu;
    // 0x30af0c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x30af0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30af10:
    // 0x30af10: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x30AF10u;
    {
        const bool branch_taken_0x30af10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AF10u;
            // 0x30af14: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30af10) {
            ctx->pc = 0x30AF58u;
            goto label_30af58;
        }
    }
    ctx->pc = 0x30AF18u;
label_30af18:
    // 0x30af18: 0xc0c2b8c  jal         func_30AE30
    ctx->pc = 0x30AF18u;
    SET_GPR_U32(ctx, 31, 0x30AF20u);
    ctx->pc = 0x30AF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AF18u;
            // 0x30af1c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AE30u;
    if (runtime->hasFunction(0x30AE30u)) {
        auto targetFn = runtime->lookupFunction(0x30AE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AF20u; }
        if (ctx->pc != 0x30AF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        search_txt_asci__FPc_0x30ae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AF20u; }
        if (ctx->pc != 0x30AF20u) { return; }
    }
    ctx->pc = 0x30AF20u;
label_30af20:
    // 0x30af20: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x30af20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x30af24: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x30AF24u;
    {
        const bool branch_taken_0x30af24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30af24) {
            ctx->pc = 0x30AF4Cu;
            goto label_30af4c;
        }
    }
    ctx->pc = 0x30AF2Cu;
    // 0x30af2c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x30af2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x30af30: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x30af30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30af34: 0x2463e270  addiu       $v1, $v1, -0x1D90
    ctx->pc = 0x30af34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959728));
    // 0x30af38: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30af38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30af3c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x30af3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30af40: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x30af40u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30af44: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x30af44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x30af48: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x30af48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
label_30af4c:
    // 0x30af4c: 0x0  nop
    ctx->pc = 0x30af4cu;
    // NOP
    // 0x30af50: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30af50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30af54: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x30af54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_30af58:
    // 0x30af58: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x30af58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30af5c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x30AF5Cu;
    {
        const bool branch_taken_0x30af5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30af5c) {
            ctx->pc = 0x30AF18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30af18;
        }
    }
    ctx->pc = 0x30AF64u;
label_30af64:
    // 0x30af64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30af64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30af68:
    // 0x30af68: 0x3e00008  jr          $ra
    ctx->pc = 0x30AF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AF68u;
            // 0x30af6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30AF70u;
}
