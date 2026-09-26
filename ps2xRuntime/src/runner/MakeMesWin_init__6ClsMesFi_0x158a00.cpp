#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMesWin_init__6ClsMesFi
// Address: 0x158a00 - 0x158b20
void MakeMesWin_init__6ClsMesFi_0x158a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMesWin_init__6ClsMesFi_0x158a00");
#endif

    switch (ctx->pc) {
        case 0x158a4cu: goto label_158a4c;
        case 0x158a94u: goto label_158a94;
        case 0x158af8u: goto label_158af8;
        default: break;
    }

    ctx->pc = 0x158a00u;

    // 0x158a00: 0xac8001d4  sw          $zero, 0x1D4($a0)
    ctx->pc = 0x158a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 0));
    // 0x158a04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158a08: 0xac8001d8  sw          $zero, 0x1D8($a0)
    ctx->pc = 0x158a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 0));
    // 0x158a0c: 0xac8001dc  sw          $zero, 0x1DC($a0)
    ctx->pc = 0x158a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 476), GPR_U32(ctx, 0));
    // 0x158a10: 0xac8001cc  sw          $zero, 0x1CC($a0)
    ctx->pc = 0x158a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 460), GPR_U32(ctx, 0));
    // 0x158a14: 0xac8001d0  sw          $zero, 0x1D0($a0)
    ctx->pc = 0x158a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 0));
    // 0x158a18: 0xac801b20  sw          $zero, 0x1B20($a0)
    ctx->pc = 0x158a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6944), GPR_U32(ctx, 0));
    // 0x158a1c: 0xac801b24  sw          $zero, 0x1B24($a0)
    ctx->pc = 0x158a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6948), GPR_U32(ctx, 0));
    // 0x158a20: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158A20u;
    {
        const bool branch_taken_0x158a20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158A20u;
            // 0x158a24: 0xac801b28  sw          $zero, 0x1B28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a20) {
            ctx->pc = 0x158A2Cu;
            goto label_158a2c;
        }
    }
    ctx->pc = 0x158A28u;
    // 0x158a28: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x158a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_158a2c:
    // 0x158a2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158a30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a34: 0xac83018c  sw          $v1, 0x18C($a0)
    ctx->pc = 0x158a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 396), GPR_U32(ctx, 3));
    // 0x158a38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a3c: 0xac8001c0  sw          $zero, 0x1C0($a0)
    ctx->pc = 0x158a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 0));
    // 0x158a40: 0xac8017dc  sw          $zero, 0x17DC($a0)
    ctx->pc = 0x158a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6108), GPR_U32(ctx, 0));
    // 0x158a44: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x158a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x158a48: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x158a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
label_158a4c:
    // 0x158a4c: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x158a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x158a50: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x158a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x158a54: 0xace000e8  sw          $zero, 0xE8($a3)
    ctx->pc = 0x158a54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
    // 0x158a58: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x158a58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x158a5c: 0xace000ec  sw          $zero, 0xEC($a3)
    ctx->pc = 0x158a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 236), GPR_U32(ctx, 0));
    // 0x158a60: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x158a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x158a64: 0xace000f0  sw          $zero, 0xF0($a3)
    ctx->pc = 0x158a64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 0));
    // 0x158a68: 0xace000f4  sw          $zero, 0xF4($a3)
    ctx->pc = 0x158a68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 0));
    // 0x158a6c: 0xace000f8  sw          $zero, 0xF8($a3)
    ctx->pc = 0x158a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 0));
    // 0x158a70: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x158a70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
    // 0x158a74: 0xace00100  sw          $zero, 0x100($a3)
    ctx->pc = 0x158a74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 256), GPR_U32(ctx, 0));
    // 0x158a78: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x158A78u;
    {
        const bool branch_taken_0x158a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158A78u;
            // 0x158a7c: 0xace00104  sw          $zero, 0x104($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a78) {
            ctx->pc = 0x158A4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158a4c;
        }
    }
    ctx->pc = 0x158A80u;
    // 0x158a80: 0xac800128  sw          $zero, 0x128($a0)
    ctx->pc = 0x158a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 0));
    // 0x158a84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a88: 0xac80012c  sw          $zero, 0x12C($a0)
    ctx->pc = 0x158a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 0));
    // 0x158a8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x158a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x158a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_158a94:
    // 0x158a94: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x158a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x158a98: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x158a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x158a9c: 0xad001e14  sw          $zero, 0x1E14($t0)
    ctx->pc = 0x158a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7700), GPR_U32(ctx, 0));
    // 0x158aa0: 0x28c3000c  slti        $v1, $a2, 0xC
    ctx->pc = 0x158aa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x158aa4: 0xad051e64  sw          $a1, 0x1E64($t0)
    ctx->pc = 0x158aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7780), GPR_U32(ctx, 5));
    // 0x158aa8: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x158aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x158aac: 0xad001e18  sw          $zero, 0x1E18($t0)
    ctx->pc = 0x158aacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7704), GPR_U32(ctx, 0));
    // 0x158ab0: 0xad051e68  sw          $a1, 0x1E68($t0)
    ctx->pc = 0x158ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7784), GPR_U32(ctx, 5));
    // 0x158ab4: 0xad001e1c  sw          $zero, 0x1E1C($t0)
    ctx->pc = 0x158ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7708), GPR_U32(ctx, 0));
    // 0x158ab8: 0xad051e6c  sw          $a1, 0x1E6C($t0)
    ctx->pc = 0x158ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7788), GPR_U32(ctx, 5));
    // 0x158abc: 0xad001e20  sw          $zero, 0x1E20($t0)
    ctx->pc = 0x158abcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7712), GPR_U32(ctx, 0));
    // 0x158ac0: 0xad051e70  sw          $a1, 0x1E70($t0)
    ctx->pc = 0x158ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7792), GPR_U32(ctx, 5));
    // 0x158ac4: 0xad001e24  sw          $zero, 0x1E24($t0)
    ctx->pc = 0x158ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7716), GPR_U32(ctx, 0));
    // 0x158ac8: 0xad051e74  sw          $a1, 0x1E74($t0)
    ctx->pc = 0x158ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7796), GPR_U32(ctx, 5));
    // 0x158acc: 0xad001e28  sw          $zero, 0x1E28($t0)
    ctx->pc = 0x158accu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7720), GPR_U32(ctx, 0));
    // 0x158ad0: 0xad051e78  sw          $a1, 0x1E78($t0)
    ctx->pc = 0x158ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7800), GPR_U32(ctx, 5));
    // 0x158ad4: 0xad001e2c  sw          $zero, 0x1E2C($t0)
    ctx->pc = 0x158ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7724), GPR_U32(ctx, 0));
    // 0x158ad8: 0xad051e7c  sw          $a1, 0x1E7C($t0)
    ctx->pc = 0x158ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7804), GPR_U32(ctx, 5));
    // 0x158adc: 0xad001e30  sw          $zero, 0x1E30($t0)
    ctx->pc = 0x158adcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7728), GPR_U32(ctx, 0));
    // 0x158ae0: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x158AE0u;
    {
        const bool branch_taken_0x158ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158AE0u;
            // 0x158ae4: 0xad051e80  sw          $a1, 0x1E80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 7808), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ae0) {
            ctx->pc = 0x158A94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158a94;
        }
    }
    ctx->pc = 0x158AE8u;
    // 0x158ae8: 0x28c10014  slti        $at, $a2, 0x14
    ctx->pc = 0x158ae8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x158aec: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x158AECu;
    {
        const bool branch_taken_0x158aec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x158AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158AECu;
            // 0x158af0: 0x63880  sll         $a3, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158aec) {
            ctx->pc = 0x158B18u;
            goto label_158b18;
        }
    }
    ctx->pc = 0x158AF4u;
    // 0x158af4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x158af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_158af8:
    // 0x158af8: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x158af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x158afc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x158afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x158b00: 0xac601e14  sw          $zero, 0x1E14($v1)
    ctx->pc = 0x158b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7700), GPR_U32(ctx, 0));
    // 0x158b04: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x158b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x158b08: 0xac651e64  sw          $a1, 0x1E64($v1)
    ctx->pc = 0x158b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7780), GPR_U32(ctx, 5));
    // 0x158b0c: 0x28c30014  slti        $v1, $a2, 0x14
    ctx->pc = 0x158b0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x158b10: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x158B10u;
    {
        const bool branch_taken_0x158b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158b10) {
            ctx->pc = 0x158AF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158af8;
        }
    }
    ctx->pc = 0x158B18u;
label_158b18:
    // 0x158b18: 0x3e00008  jr          $ra
    ctx->pc = 0x158B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158B20u;
}
