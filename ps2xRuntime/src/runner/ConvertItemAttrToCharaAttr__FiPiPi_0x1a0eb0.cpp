#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvertItemAttrToCharaAttr__FiPiPi
// Address: 0x1a0eb0 - 0x1a0fa4
void ConvertItemAttrToCharaAttr__FiPiPi_0x1a0eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvertItemAttrToCharaAttr__FiPiPi_0x1a0eb0");
#endif

    ctx->pc = 0x1a0eb0u;

    // 0x1a0eb0: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x1a0eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x1a0eb4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a0eb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0eb8: 0x884024  and         $t0, $a0, $t0
    ctx->pc = 0x1a0eb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x1a0ebc: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0EBCu;
    {
        const bool branch_taken_0x1a0ebc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0EBCu;
            // 0x1a0ec0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ebc) {
            ctx->pc = 0x1A0EC8u;
            goto label_1a0ec8;
        }
    }
    ctx->pc = 0x1A0EC4u;
    // 0x1a0ec4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1a0ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_1a0ec8:
    // 0x1a0ec8: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x1a0ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x1a0ecc: 0x884024  and         $t0, $a0, $t0
    ctx->pc = 0x1a0eccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x1a0ed0: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0ED0u;
    {
        const bool branch_taken_0x1a0ed0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0ED0u;
            // 0x1a0ed4: 0x3c080004  lui         $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ed0) {
            ctx->pc = 0x1A0EDCu;
            goto label_1a0edc;
        }
    }
    ctx->pc = 0x1A0ED8u;
    // 0x1a0ed8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1a0ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1a0edc:
    // 0x1a0edc: 0x884024  and         $t0, $a0, $t0
    ctx->pc = 0x1a0edcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x1a0ee0: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0EE0u;
    {
        const bool branch_taken_0x1a0ee0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0EE0u;
            // 0x1a0ee4: 0x30884000  andi        $t0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ee0) {
            ctx->pc = 0x1A0EECu;
            goto label_1a0eec;
        }
    }
    ctx->pc = 0x1A0EE8u;
    // 0x1a0ee8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1a0ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_1a0eec:
    // 0x1a0eec: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0EECu;
    {
        const bool branch_taken_0x1a0eec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0EECu;
            // 0x1a0ef0: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0eec) {
            ctx->pc = 0x1A0EF8u;
            goto label_1a0ef8;
        }
    }
    ctx->pc = 0x1A0EF4u;
    // 0x1a0ef4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1a0ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_1a0ef8:
    // 0x1a0ef8: 0x884024  and         $t0, $a0, $t0
    ctx->pc = 0x1a0ef8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x1a0efc: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0EFCu;
    {
        const bool branch_taken_0x1a0efc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0EFCu;
            // 0x1a0f00: 0x3c080200  lui         $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0efc) {
            ctx->pc = 0x1A0F08u;
            goto label_1a0f08;
        }
    }
    ctx->pc = 0x1A0F04u;
    // 0x1a0f04: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1a0f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_1a0f08:
    // 0x1a0f08: 0x884024  and         $t0, $a0, $t0
    ctx->pc = 0x1a0f08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x1a0f0c: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0F0Cu;
    {
        const bool branch_taken_0x1a0f0c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F0Cu;
            // 0x1a0f10: 0x3c080800  lui         $t0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f0c) {
            ctx->pc = 0x1A0F18u;
            goto label_1a0f18;
        }
    }
    ctx->pc = 0x1A0F14u;
    // 0x1a0f14: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x1a0f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_1a0f18:
    // 0x1a0f18: 0x884024  and         $t0, $a0, $t0
    ctx->pc = 0x1a0f18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x1a0f1c: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0F1Cu;
    {
        const bool branch_taken_0x1a0f1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F1Cu;
            // 0x1a0f20: 0x3c080002  lui         $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f1c) {
            ctx->pc = 0x1A0F28u;
            goto label_1a0f28;
        }
    }
    ctx->pc = 0x1A0F24u;
    // 0x1a0f24: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1a0f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_1a0f28:
    // 0x1a0f28: 0x884024  and         $t0, $a0, $t0
    ctx->pc = 0x1a0f28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x1a0f2c: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0F2Cu;
    {
        const bool branch_taken_0x1a0f2c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F2Cu;
            // 0x1a0f30: 0x3c080020  lui         $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f2c) {
            ctx->pc = 0x1A0F38u;
            goto label_1a0f38;
        }
    }
    ctx->pc = 0x1A0F34u;
    // 0x1a0f34: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x1a0f34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
label_1a0f38:
    // 0x1a0f38: 0x884024  and         $t0, $a0, $t0
    ctx->pc = 0x1a0f38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x1a0f3c: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0F3Cu;
    {
        const bool branch_taken_0x1a0f3c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F3Cu;
            // 0x1a0f40: 0x3c080008  lui         $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f3c) {
            ctx->pc = 0x1A0F48u;
            goto label_1a0f48;
        }
    }
    ctx->pc = 0x1A0F44u;
    // 0x1a0f44: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x1a0f44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
label_1a0f48:
    // 0x1a0f48: 0x884024  and         $t0, $a0, $t0
    ctx->pc = 0x1a0f48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x1a0f4c: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0F4Cu;
    {
        const bool branch_taken_0x1a0f4c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F4Cu;
            // 0x1a0f50: 0x30888000  andi        $t0, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f4c) {
            ctx->pc = 0x1A0F58u;
            goto label_1a0f58;
        }
    }
    ctx->pc = 0x1A0F54u;
    // 0x1a0f54: 0x34e70004  ori         $a3, $a3, 0x4
    ctx->pc = 0x1a0f54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
label_1a0f58:
    // 0x1a0f58: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0F58u;
    {
        const bool branch_taken_0x1a0f58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F58u;
            // 0x1a0f5c: 0x3c080400  lui         $t0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f58) {
            ctx->pc = 0x1A0F64u;
            goto label_1a0f64;
        }
    }
    ctx->pc = 0x1A0F60u;
    // 0x1a0f60: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x1a0f60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_1a0f64:
    // 0x1a0f64: 0x884024  and         $t0, $a0, $t0
    ctx->pc = 0x1a0f64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x1a0f68: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0F68u;
    {
        const bool branch_taken_0x1a0f68 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F68u;
            // 0x1a0f6c: 0x3c081000  lui         $t0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f68) {
            ctx->pc = 0x1A0F74u;
            goto label_1a0f74;
        }
    }
    ctx->pc = 0x1A0F70u;
    // 0x1a0f70: 0x34e70020  ori         $a3, $a3, 0x20
    ctx->pc = 0x1a0f70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32);
label_1a0f74:
    // 0x1a0f74: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x1a0f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x1a0f78: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0F78u;
    {
        const bool branch_taken_0x1a0f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f78) {
            ctx->pc = 0x1A0F84u;
            goto label_1a0f84;
        }
    }
    ctx->pc = 0x1A0F80u;
    // 0x1a0f80: 0x34e70040  ori         $a3, $a3, 0x40
    ctx->pc = 0x1a0f80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
label_1a0f84:
    // 0x1a0f84: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0F84u;
    {
        const bool branch_taken_0x1a0f84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f84) {
            ctx->pc = 0x1A0F90u;
            goto label_1a0f90;
        }
    }
    ctx->pc = 0x1A0F8Cu;
    // 0x1a0f8c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a0f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1a0f90:
    // 0x1a0f90: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0F90u;
    {
        const bool branch_taken_0x1a0f90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f90) {
            ctx->pc = 0x1A0F9Cu;
            goto label_1a0f9c;
        }
    }
    ctx->pc = 0x1A0F98u;
    // 0x1a0f98: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1a0f98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_1a0f9c:
    // 0x1a0f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0FA4u;
}
