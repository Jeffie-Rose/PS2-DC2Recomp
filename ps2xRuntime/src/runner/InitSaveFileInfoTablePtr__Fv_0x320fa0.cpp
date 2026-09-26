#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSaveFileInfoTablePtr__Fv
// Address: 0x320fa0 - 0x321068
void InitSaveFileInfoTablePtr__Fv_0x320fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSaveFileInfoTablePtr__Fv_0x320fa0");
#endif

    switch (ctx->pc) {
        case 0x320fc8u: goto label_320fc8;
        default: break;
    }

    ctx->pc = 0x320fa0u;

    // 0x320fa0: 0xaf80a3fc  sw          $zero, -0x5C04($gp)
    ctx->pc = 0x320fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943740), GPR_U32(ctx, 0));
    // 0x320fa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x320fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320fa8: 0xaf80a400  sw          $zero, -0x5C00($gp)
    ctx->pc = 0x320fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943744), GPR_U32(ctx, 0));
    // 0x320fac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x320facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320fb0: 0xaf80a404  sw          $zero, -0x5BFC($gp)
    ctx->pc = 0x320fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943748), GPR_U32(ctx, 0));
    // 0x320fb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x320fb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320fb8: 0xaf80a408  sw          $zero, -0x5BF8($gp)
    ctx->pc = 0x320fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943752), GPR_U32(ctx, 0));
    // 0x320fbc: 0xaf80a40c  sw          $zero, -0x5BF4($gp)
    ctx->pc = 0x320fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943756), GPR_U32(ctx, 0));
    // 0x320fc0: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x320fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x320fc4: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x320fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_320fc8:
    // 0x320fc8: 0x8f84a410  lw          $a0, -0x5BF0($gp)
    ctx->pc = 0x320fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x320fcc: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x320fccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x320fd0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x320fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x320fd4: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x320fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x320fd8: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x320fd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x320fdc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x320fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x320fe0: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x320fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x320fe4: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x320fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x320fe8: 0x8f84a410  lw          $a0, -0x5BF0($gp)
    ctx->pc = 0x320fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x320fec: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x320fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x320ff0: 0xa0800060  sb          $zero, 0x60($a0)
    ctx->pc = 0x320ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x320ff4: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x320ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x320ff8: 0x8f84a410  lw          $a0, -0x5BF0($gp)
    ctx->pc = 0x320ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x320ffc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x320ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x321000: 0xa08000a0  sb          $zero, 0xA0($a0)
    ctx->pc = 0x321000u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x321004: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x321004u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x321008: 0x8f84a410  lw          $a0, -0x5BF0($gp)
    ctx->pc = 0x321008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x32100c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x32100cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x321010: 0xa08000e0  sb          $zero, 0xE0($a0)
    ctx->pc = 0x321010u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 224), (uint8_t)GPR_U32(ctx, 0));
    // 0x321014: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x321014u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x321018: 0x8f84a410  lw          $a0, -0x5BF0($gp)
    ctx->pc = 0x321018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x32101c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x32101cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x321020: 0xa0800120  sb          $zero, 0x120($a0)
    ctx->pc = 0x321020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 288), (uint8_t)GPR_U32(ctx, 0));
    // 0x321024: 0xad200010  sw          $zero, 0x10($t1)
    ctx->pc = 0x321024u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 0));
    // 0x321028: 0x8f84a410  lw          $a0, -0x5BF0($gp)
    ctx->pc = 0x321028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x32102c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x32102cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x321030: 0xa0800160  sb          $zero, 0x160($a0)
    ctx->pc = 0x321030u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 352), (uint8_t)GPR_U32(ctx, 0));
    // 0x321034: 0xad200014  sw          $zero, 0x14($t1)
    ctx->pc = 0x321034u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 0));
    // 0x321038: 0x8f84a410  lw          $a0, -0x5BF0($gp)
    ctx->pc = 0x321038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x32103c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x32103cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x321040: 0xa08001a0  sb          $zero, 0x1A0($a0)
    ctx->pc = 0x321040u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 416), (uint8_t)GPR_U32(ctx, 0));
    // 0x321044: 0xad200018  sw          $zero, 0x18($t1)
    ctx->pc = 0x321044u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 0));
    // 0x321048: 0x8f84a410  lw          $a0, -0x5BF0($gp)
    ctx->pc = 0x321048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943760)));
    // 0x32104c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x32104cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x321050: 0xa08001e0  sb          $zero, 0x1E0($a0)
    ctx->pc = 0x321050u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 480), (uint8_t)GPR_U32(ctx, 0));
    // 0x321054: 0x24e70200  addiu       $a3, $a3, 0x200
    ctx->pc = 0x321054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x321058: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x321058u;
    {
        const bool branch_taken_0x321058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32105Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321058u;
            // 0x32105c: 0xad20001c  sw          $zero, 0x1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321058) {
            ctx->pc = 0x320FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_320fc8;
        }
    }
    ctx->pc = 0x321060u;
    // 0x321060: 0x3e00008  jr          $ra
    ctx->pc = 0x321060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x321068u;
}
