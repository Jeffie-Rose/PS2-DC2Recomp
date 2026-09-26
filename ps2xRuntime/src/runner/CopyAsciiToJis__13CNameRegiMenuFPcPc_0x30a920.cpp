#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyAsciiToJis__13CNameRegiMenuFPcPc
// Address: 0x30a920 - 0x30a9d0
void CopyAsciiToJis__13CNameRegiMenuFPcPc_0x30a920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyAsciiToJis__13CNameRegiMenuFPcPc_0x30a920");
#endif

    switch (ctx->pc) {
        case 0x30a948u: goto label_30a948;
        case 0x30a958u: goto label_30a958;
        default: break;
    }

    ctx->pc = 0x30a920u;

    // 0x30a920: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x30A920u;
    {
        const bool branch_taken_0x30a920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a920) {
            ctx->pc = 0x30A9C8u;
            goto label_30a9c8;
        }
    }
    ctx->pc = 0x30A928u;
    // 0x30a928: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A928u;
    {
        const bool branch_taken_0x30a928 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a928) {
            ctx->pc = 0x30A938u;
            goto label_30a938;
        }
    }
    ctx->pc = 0x30A930u;
    // 0x30a930: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x30A930u;
    {
        const bool branch_taken_0x30a930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a930) {
            ctx->pc = 0x30A9C8u;
            goto label_30a9c8;
        }
    }
    ctx->pc = 0x30A938u;
label_30a938:
    // 0x30a938: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x30a938u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x30a93c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x30A93Cu;
    {
        const bool branch_taken_0x30a93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A93Cu;
            // 0x30a940: 0x24e7de20  addiu       $a3, $a3, -0x21E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a93c) {
            ctx->pc = 0x30A9B4u;
            goto label_30a9b4;
        }
    }
    ctx->pc = 0x30A944u;
    // 0x30a944: 0x3463c  dsll32      $t0, $v1, 24
    ctx->pc = 0x30a944u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 24));
label_30a948:
    // 0x30a948: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x30a948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30a94c: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x30a94cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x30a950: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30A950u;
    {
        const bool branch_taken_0x30a950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A950u;
            // 0x30a954: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a950) {
            ctx->pc = 0x30A974u;
            goto label_30a974;
        }
    }
    ctx->pc = 0x30A958u;
label_30a958:
    // 0x30a958: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30a958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30a95c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x30a95cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x30a960: 0x15030003  bne         $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A960u;
    {
        const bool branch_taken_0x30a960 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x30a960) {
            ctx->pc = 0x30A970u;
            goto label_30a970;
        }
    }
    ctx->pc = 0x30A968u;
    // 0x30a968: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30A968u;
    {
        const bool branch_taken_0x30a968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A968u;
            // 0x30a96c: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a968) {
            ctx->pc = 0x30A988u;
            goto label_30a988;
        }
    }
    ctx->pc = 0x30A970u;
label_30a970:
    // 0x30a970: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x30a970u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_30a974:
    // 0x30a974: 0x0  nop
    ctx->pc = 0x30a974u;
    // NOP
    // 0x30a978: 0xea1821  addu        $v1, $a3, $t2
    ctx->pc = 0x30a978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x30a97c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x30a97cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30a980: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x30A980u;
    {
        const bool branch_taken_0x30a980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a980) {
            ctx->pc = 0x30A958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30a958;
        }
    }
    ctx->pc = 0x30A988u;
label_30a988:
    // 0x30a988: 0x120082a  slt         $at, $t1, $zero
    ctx->pc = 0x30a988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x30a98c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A98Cu;
    {
        const bool branch_taken_0x30a98c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a98c) {
            ctx->pc = 0x30A9B0u;
            goto label_30a9b0;
        }
    }
    ctx->pc = 0x30A994u;
    // 0x30a994: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x30a994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x30a998: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x30a998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30a99c: 0x810303b8  lb          $v1, 0x3B8($t0)
    ctx->pc = 0x30a99cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 952)));
    // 0x30a9a0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x30a9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30a9a4: 0x810303b9  lb          $v1, 0x3B9($t0)
    ctx->pc = 0x30a9a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 953)));
    // 0x30a9a8: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x30a9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x30a9ac: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x30a9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_30a9b0:
    // 0x30a9b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30a9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_30a9b4:
    // 0x30a9b4: 0x0  nop
    ctx->pc = 0x30a9b4u;
    // NOP
    // 0x30a9b8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x30a9b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30a9bc: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x30A9BCu;
    {
        const bool branch_taken_0x30a9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A9BCu;
            // 0x30a9c0: 0x3463c  dsll32      $t0, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a9bc) {
            ctx->pc = 0x30A948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30a948;
        }
    }
    ctx->pc = 0x30A9C4u;
    // 0x30a9c4: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x30a9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_30a9c8:
    // 0x30a9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x30A9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30A9D0u;
}
