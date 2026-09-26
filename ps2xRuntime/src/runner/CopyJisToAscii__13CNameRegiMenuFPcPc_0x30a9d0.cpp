#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyJisToAscii__13CNameRegiMenuFPcPc
// Address: 0x30a9d0 - 0x30aa98
void CopyJisToAscii__13CNameRegiMenuFPcPc_0x30a9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyJisToAscii__13CNameRegiMenuFPcPc_0x30a9d0");
#endif

    switch (ctx->pc) {
        case 0x30a9f8u: goto label_30a9f8;
        case 0x30aa08u: goto label_30aa08;
        default: break;
    }

    ctx->pc = 0x30a9d0u;

    // 0x30a9d0: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x30A9D0u;
    {
        const bool branch_taken_0x30a9d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a9d0) {
            ctx->pc = 0x30AA90u;
            goto label_30aa90;
        }
    }
    ctx->pc = 0x30A9D8u;
    // 0x30a9d8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A9D8u;
    {
        const bool branch_taken_0x30a9d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a9d8) {
            ctx->pc = 0x30A9E8u;
            goto label_30a9e8;
        }
    }
    ctx->pc = 0x30A9E0u;
    // 0x30a9e0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x30A9E0u;
    {
        const bool branch_taken_0x30a9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a9e0) {
            ctx->pc = 0x30AA90u;
            goto label_30aa90;
        }
    }
    ctx->pc = 0x30A9E8u;
label_30a9e8:
    // 0x30a9e8: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x30a9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x30a9ec: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x30A9ECu;
    {
        const bool branch_taken_0x30a9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A9ECu;
            // 0x30a9f0: 0x24e7de20  addiu       $a3, $a3, -0x21E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a9ec) {
            ctx->pc = 0x30AA7Cu;
            goto label_30aa7c;
        }
    }
    ctx->pc = 0x30A9F4u;
    // 0x30a9f4: 0x34e3c  dsll32      $t1, $v1, 24
    ctx->pc = 0x30a9f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 24));
label_30a9f8:
    // 0x30a9f8: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x30a9f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30a9fc: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x30a9fcu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x30aa00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30AA00u;
    {
        const bool branch_taken_0x30aa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AA00u;
            // 0x30aa04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa00) {
            ctx->pc = 0x30AA34u;
            goto label_30aa34;
        }
    }
    ctx->pc = 0x30AA08u;
label_30aa08:
    // 0x30aa08: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30aa08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30aa0c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x30aa0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x30aa10: 0x15230007  bne         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30AA10u;
    {
        const bool branch_taken_0x30aa10 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        if (branch_taken_0x30aa10) {
            ctx->pc = 0x30AA30u;
            goto label_30aa30;
        }
    }
    ctx->pc = 0x30AA18u;
    // 0x30aa18: 0x810303b9  lb          $v1, 0x3B9($t0)
    ctx->pc = 0x30aa18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 953)));
    // 0x30aa1c: 0x80a80001  lb          $t0, 0x1($a1)
    ctx->pc = 0x30aa1cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x30aa20: 0x15030003  bne         $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30AA20u;
    {
        const bool branch_taken_0x30aa20 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x30aa20) {
            ctx->pc = 0x30AA30u;
            goto label_30aa30;
        }
    }
    ctx->pc = 0x30AA28u;
    // 0x30aa28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30AA28u;
    {
        const bool branch_taken_0x30aa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AA28u;
            // 0x30aa2c: 0x160502d  daddu       $t2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa28) {
            ctx->pc = 0x30AA48u;
            goto label_30aa48;
        }
    }
    ctx->pc = 0x30AA30u;
label_30aa30:
    // 0x30aa30: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x30aa30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_30aa34:
    // 0x30aa34: 0x0  nop
    ctx->pc = 0x30aa34u;
    // NOP
    // 0x30aa38: 0x8b4021  addu        $t0, $a0, $t3
    ctx->pc = 0x30aa38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x30aa3c: 0x810303b8  lb          $v1, 0x3B8($t0)
    ctx->pc = 0x30aa3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 952)));
    // 0x30aa40: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x30AA40u;
    {
        const bool branch_taken_0x30aa40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30aa40) {
            ctx->pc = 0x30AA08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30aa08;
        }
    }
    ctx->pc = 0x30AA48u;
label_30aa48:
    // 0x30aa48: 0x140082a  slt         $at, $t2, $zero
    ctx->pc = 0x30aa48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x30aa4c: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x30AA4Cu;
    {
        const bool branch_taken_0x30aa4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30aa4c) {
            ctx->pc = 0x30AA74u;
            goto label_30aa74;
        }
    }
    ctx->pc = 0x30AA54u;
    // 0x30aa54: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x30AA54u;
    {
        const bool branch_taken_0x30aa54 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x30AA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AA54u;
            // 0x30aa58: 0xa1843  sra         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa54) {
            ctx->pc = 0x30AA64u;
            goto label_30aa64;
        }
    }
    ctx->pc = 0x30AA5Cu;
    // 0x30aa5c: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x30aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x30aa60: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x30aa60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_30aa64:
    // 0x30aa64: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x30aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x30aa68: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x30aa68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30aa6c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x30aa6cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30aa70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30aa70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_30aa74:
    // 0x30aa74: 0x0  nop
    ctx->pc = 0x30aa74u;
    // NOP
    // 0x30aa78: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x30aa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_30aa7c:
    // 0x30aa7c: 0x0  nop
    ctx->pc = 0x30aa7cu;
    // NOP
    // 0x30aa80: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x30aa80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30aa84: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x30AA84u;
    {
        const bool branch_taken_0x30aa84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AA84u;
            // 0x30aa88: 0x34e3c  dsll32      $t1, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa84) {
            ctx->pc = 0x30A9F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30a9f8;
        }
    }
    ctx->pc = 0x30AA8Cu;
    // 0x30aa8c: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x30aa8cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_30aa90:
    // 0x30aa90: 0x3e00008  jr          $ra
    ctx->pc = 0x30AA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30AA98u;
}
