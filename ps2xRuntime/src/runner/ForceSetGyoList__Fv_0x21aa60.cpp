#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ForceSetGyoList__Fv
// Address: 0x21aa60 - 0x21ab38
void ForceSetGyoList__Fv_0x21aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForceSetGyoList__Fv_0x21aa60");
#endif

    switch (ctx->pc) {
        case 0x21aa7cu: goto label_21aa7c;
        case 0x21aa8cu: goto label_21aa8c;
        case 0x21aab4u: goto label_21aab4;
        case 0x21aadcu: goto label_21aadc;
        case 0x21ab08u: goto label_21ab08;
        default: break;
    }

    ctx->pc = 0x21aa60u;

    // 0x21aa60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21aa64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21aa68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21aa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21aa6c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x21aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x21aa70: 0x8f849290  lw          $a0, -0x6D70($gp)
    ctx->pc = 0x21aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21aa74: 0xc0bdc18  jal         func_2F7060
    ctx->pc = 0x21AA74u;
    SET_GPR_U32(ctx, 31, 0x21AA7Cu);
    ctx->pc = 0x21AA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA74u;
            // 0x21aa78: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7060u;
    if (runtime->hasFunction(0x2F7060u)) {
        auto targetFn = runtime->lookupFunction(0x2F7060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AA7Cu; }
        if (ctx->pc != 0x21AA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceData__12CGyoRaceDataFPi_0x2f7060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AA7Cu; }
        if (ctx->pc != 0x21AA7Cu) { return; }
    }
    ctx->pc = 0x21AA7Cu;
label_21aa7c:
    // 0x21aa7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21AA7Cu;
    {
        const bool branch_taken_0x21aa7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21aa7c) {
            ctx->pc = 0x21AA98u;
            goto label_21aa98;
        }
    }
    ctx->pc = 0x21AA84u;
    // 0x21aa84: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x21AA84u;
    {
        const bool branch_taken_0x21aa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA84u;
            // 0x21aa88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa84) {
            ctx->pc = 0x21AB30u;
            goto label_21ab30;
        }
    }
    ctx->pc = 0x21AA8Cu;
label_21aa8c:
    // 0x21aa8c: 0x8f8392bc  lw          $v1, -0x6D44($gp)
    ctx->pc = 0x21aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
    // 0x21aa90: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21aa94: 0xaf8392bc  sw          $v1, -0x6D44($gp)
    ctx->pc = 0x21aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939324), GPR_U32(ctx, 3));
label_21aa98:
    // 0x21aa98: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x21aa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x21aa9c: 0x8f8392bc  lw          $v1, -0x6D44($gp)
    ctx->pc = 0x21aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
    // 0x21aaa0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x21aaa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21aaa4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21AAA4u;
    {
        const bool branch_taken_0x21aaa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21aaa4) {
            ctx->pc = 0x21AA8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21aa8c;
        }
    }
    ctx->pc = 0x21AAACu;
    // 0x21aaac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21AAACu;
    {
        const bool branch_taken_0x21aaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aaac) {
            ctx->pc = 0x21AAC0u;
            goto label_21aac0;
        }
    }
    ctx->pc = 0x21AAB4u;
label_21aab4:
    // 0x21aab4: 0x8f8392bc  lw          $v1, -0x6D44($gp)
    ctx->pc = 0x21aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
    // 0x21aab8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21aabc: 0xaf8392bc  sw          $v1, -0x6D44($gp)
    ctx->pc = 0x21aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939324), GPR_U32(ctx, 3));
label_21aac0:
    // 0x21aac0: 0x8f8392bc  lw          $v1, -0x6D44($gp)
    ctx->pc = 0x21aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
    // 0x21aac4: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x21aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x21aac8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x21aac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21aacc: 0x1020fff9  beqz        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21AACCu;
    {
        const bool branch_taken_0x21aacc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aacc) {
            ctx->pc = 0x21AAB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21aab4;
        }
    }
    ctx->pc = 0x21AAD4u;
    // 0x21aad4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21AAD4u;
    {
        const bool branch_taken_0x21aad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aad4) {
            ctx->pc = 0x21AAE8u;
            goto label_21aae8;
        }
    }
    ctx->pc = 0x21AADCu;
label_21aadc:
    // 0x21aadc: 0x8f8392b8  lw          $v1, -0x6D48($gp)
    ctx->pc = 0x21aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21aae0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21aae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21aae4: 0xaf8392b8  sw          $v1, -0x6D48($gp)
    ctx->pc = 0x21aae4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939320), GPR_U32(ctx, 3));
label_21aae8:
    // 0x21aae8: 0x8f8492bc  lw          $a0, -0x6D44($gp)
    ctx->pc = 0x21aae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
    // 0x21aaec: 0x8f8392b8  lw          $v1, -0x6D48($gp)
    ctx->pc = 0x21aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21aaf0: 0x24840009  addiu       $a0, $a0, 0x9
    ctx->pc = 0x21aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9));
    // 0x21aaf4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x21aaf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21aaf8: 0x1020fff8  beqz        $at, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21AAF8u;
    {
        const bool branch_taken_0x21aaf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aaf8) {
            ctx->pc = 0x21AADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21aadc;
        }
    }
    ctx->pc = 0x21AB00u;
    // 0x21ab00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21AB00u;
    {
        const bool branch_taken_0x21ab00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab00) {
            ctx->pc = 0x21AB14u;
            goto label_21ab14;
        }
    }
    ctx->pc = 0x21AB08u;
label_21ab08:
    // 0x21ab08: 0x8f8392b8  lw          $v1, -0x6D48($gp)
    ctx->pc = 0x21ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21ab0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21ab10: 0xaf8392b8  sw          $v1, -0x6D48($gp)
    ctx->pc = 0x21ab10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939320), GPR_U32(ctx, 3));
label_21ab14:
    // 0x21ab14: 0x0  nop
    ctx->pc = 0x21ab14u;
    // NOP
    // 0x21ab18: 0x8f8492b8  lw          $a0, -0x6D48($gp)
    ctx->pc = 0x21ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21ab1c: 0x8f8392bc  lw          $v1, -0x6D44($gp)
    ctx->pc = 0x21ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
    // 0x21ab20: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x21ab20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21ab24: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21AB24u;
    {
        const bool branch_taken_0x21ab24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ab24) {
            ctx->pc = 0x21AB08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ab08;
        }
    }
    ctx->pc = 0x21AB2Cu;
    // 0x21ab2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ab2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21ab30:
    // 0x21ab30: 0x3e00008  jr          $ra
    ctx->pc = 0x21AB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AB30u;
            // 0x21ab34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21AB38u;
}
