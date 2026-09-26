#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SjisToJis__FUl
// Address: 0x185ef0 - 0x185fd0
void SjisToJis__FUl_0x185ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SjisToJis__FUl_0x185ef0");
#endif

    ctx->pc = 0x185ef0u;

    // 0x185ef0: 0x4123a  dsrl        $v0, $a0, 8
    ctx->pc = 0x185ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 8);
    // 0x185ef4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x185ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x185ef8: 0x2ca20081  sltiu       $v0, $a1, 0x81
    ctx->pc = 0x185ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x185efc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x185EFCu;
    {
        const bool branch_taken_0x185efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185EFCu;
            // 0x185f00: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185efc) {
            ctx->pc = 0x185F18u;
            goto label_185f18;
        }
    }
    ctx->pc = 0x185F04u;
    // 0x185f04: 0x2ca100a0  sltiu       $at, $a1, 0xA0
    ctx->pc = 0x185f04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x185f08: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x185F08u;
    {
        const bool branch_taken_0x185f08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185F08u;
            // 0x185f0c: 0x2ca200e0  sltiu       $v0, $a1, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)224) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f08) {
            ctx->pc = 0x185F1Cu;
            goto label_185f1c;
        }
    }
    ctx->pc = 0x185F10u;
    // 0x185f10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x185F10u;
    {
        const bool branch_taken_0x185f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185F10u;
            // 0x185f14: 0x64a5ff7f  daddiu      $a1, $a1, -0x81 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967167);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f10) {
            ctx->pc = 0x185F48u;
            goto label_185f48;
        }
    }
    ctx->pc = 0x185F18u;
label_185f18:
    // 0x185f18: 0x2ca200e0  sltiu       $v0, $a1, 0xE0
    ctx->pc = 0x185f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)224) ? 1 : 0);
label_185f1c:
    // 0x185f1c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x185F1Cu;
    {
        const bool branch_taken_0x185f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185F1Cu;
            // 0x185f20: 0x2c820040  sltiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f1c) {
            ctx->pc = 0x185F4Cu;
            goto label_185f4c;
        }
    }
    ctx->pc = 0x185F24u;
    // 0x185f24: 0x2ca100f0  sltiu       $at, $a1, 0xF0
    ctx->pc = 0x185f24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
    // 0x185f28: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x185F28u;
    {
        const bool branch_taken_0x185f28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185F28u;
            // 0x185f2c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f28) {
            ctx->pc = 0x185F48u;
            goto label_185f48;
        }
    }
    ctx->pc = 0x185F30u;
    // 0x185f30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x185f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185f34: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x185f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x185f38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x185f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x185f3c: 0x3442ff3f  ori         $v0, $v0, 0xFF3F
    ctx->pc = 0x185f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65343);
    // 0x185f40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x185f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x185f44: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x185f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
label_185f48:
    // 0x185f48: 0x2c820040  sltiu       $v0, $a0, 0x40
    ctx->pc = 0x185f48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_185f4c:
    // 0x185f4c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x185F4Cu;
    {
        const bool branch_taken_0x185f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185F4Cu;
            // 0x185f50: 0x52878  dsll        $a1, $a1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f4c) {
            ctx->pc = 0x185F68u;
            goto label_185f68;
        }
    }
    ctx->pc = 0x185F54u;
    // 0x185f54: 0x2c81007f  sltiu       $at, $a0, 0x7F
    ctx->pc = 0x185f54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x185f58: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x185F58u;
    {
        const bool branch_taken_0x185f58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185F58u;
            // 0x185f5c: 0x2c820080  sltiu       $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f58) {
            ctx->pc = 0x185F6Cu;
            goto label_185f6c;
        }
    }
    ctx->pc = 0x185F60u;
    // 0x185f60: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x185F60u;
    {
        const bool branch_taken_0x185f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185F60u;
            // 0x185f64: 0x6484ffc0  daddiu      $a0, $a0, -0x40 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967232);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f60) {
            ctx->pc = 0x185FBCu;
            goto label_185fbc;
        }
    }
    ctx->pc = 0x185F68u;
label_185f68:
    // 0x185f68: 0x2c820080  sltiu       $v0, $a0, 0x80
    ctx->pc = 0x185f68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_185f6c:
    // 0x185f6c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x185F6Cu;
    {
        const bool branch_taken_0x185f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185F6Cu;
            // 0x185f70: 0x2c82009f  sltiu       $v0, $a0, 0x9F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)159) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f6c) {
            ctx->pc = 0x185FA0u;
            goto label_185fa0;
        }
    }
    ctx->pc = 0x185F74u;
    // 0x185f74: 0x2c81009f  sltiu       $at, $a0, 0x9F
    ctx->pc = 0x185f74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)159) ? 1 : 0);
    // 0x185f78: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x185F78u;
    {
        const bool branch_taken_0x185f78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f78) {
            ctx->pc = 0x185FA0u;
            goto label_185fa0;
        }
    }
    ctx->pc = 0x185F80u;
    // 0x185f80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x185f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x185f84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x185f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185f88: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x185f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x185f8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x185f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x185f90: 0x3442ffbf  ori         $v0, $v0, 0xFFBF
    ctx->pc = 0x185f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65471);
    // 0x185f94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x185f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x185f98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x185F98u;
    {
        const bool branch_taken_0x185f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185F98u;
            // 0x185f9c: 0x82202d  daddu       $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f98) {
            ctx->pc = 0x185FBCu;
            goto label_185fbc;
        }
    }
    ctx->pc = 0x185FA0u;
label_185fa0:
    // 0x185fa0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x185FA0u;
    {
        const bool branch_taken_0x185fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185FA0u;
            // 0x185fa4: 0x64a20001  daddiu      $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fa0) {
            ctx->pc = 0x185FC0u;
            goto label_185fc0;
        }
    }
    ctx->pc = 0x185FA8u;
    // 0x185fa8: 0x2c8100fd  sltiu       $at, $a0, 0xFD
    ctx->pc = 0x185fa8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)253) ? 1 : 0);
    // 0x185fac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x185FACu;
    {
        const bool branch_taken_0x185fac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x185fac) {
            ctx->pc = 0x185FBCu;
            goto label_185fbc;
        }
    }
    ctx->pc = 0x185FB4u;
    // 0x185fb4: 0x6484ff61  daddiu      $a0, $a0, -0x9F
    ctx->pc = 0x185fb4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967137);
    // 0x185fb8: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x185fb8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_185fbc:
    // 0x185fbc: 0x64a20001  daddiu      $v0, $a1, 0x1
    ctx->pc = 0x185fbcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_185fc0:
    // 0x185fc0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x185fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x185fc4: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x185fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x185fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x185FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185FC8u;
            // 0x185fcc: 0x64422021  daddiu      $v0, $v0, 0x2021 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)8225);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185FD0u;
}
