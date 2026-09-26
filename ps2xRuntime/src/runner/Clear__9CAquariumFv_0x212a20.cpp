#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clear__9CAquariumFv
// Address: 0x212a20 - 0x212ba4
void Clear__9CAquariumFv_0x212a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9CAquariumFv_0x212a20");
#endif

    switch (ctx->pc) {
        case 0x212ab0u: goto label_212ab0;
        case 0x212abcu: goto label_212abc;
        case 0x212b00u: goto label_212b00;
        case 0x212b94u: goto label_212b94;
        default: break;
    }

    ctx->pc = 0x212a20u;

    // 0x212a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212a24: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x212a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x212a28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x212a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x212a2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x212a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212a30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x212a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x212a34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x212a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x212a38: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x212a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x212a3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a40: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x212a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x212a44: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x212a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x212a48: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x212a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x212a4c: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x212a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x212a50: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x212a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x212a54: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x212a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x212a58: 0xa48300b0  sh          $v1, 0xB0($a0)
    ctx->pc = 0x212a58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 176), (uint16_t)GPR_U32(ctx, 3));
    // 0x212a5c: 0xa48300b2  sh          $v1, 0xB2($a0)
    ctx->pc = 0x212a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 178), (uint16_t)GPR_U32(ctx, 3));
    // 0x212a60: 0xa48300b4  sh          $v1, 0xB4($a0)
    ctx->pc = 0x212a60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 180), (uint16_t)GPR_U32(ctx, 3));
    // 0x212a64: 0xac800184  sw          $zero, 0x184($a0)
    ctx->pc = 0x212a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 0));
    // 0x212a68: 0xac80017c  sw          $zero, 0x17C($a0)
    ctx->pc = 0x212a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 380), GPR_U32(ctx, 0));
    // 0x212a6c: 0xa4830190  sh          $v1, 0x190($a0)
    ctx->pc = 0x212a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 400), (uint16_t)GPR_U32(ctx, 3));
    // 0x212a70: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x212a70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x212a74: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x212a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x212a78: 0xa48300bc  sh          $v1, 0xBC($a0)
    ctx->pc = 0x212a78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 188), (uint16_t)GPR_U32(ctx, 3));
    // 0x212a7c: 0xac8200c4  sw          $v0, 0xC4($a0)
    ctx->pc = 0x212a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 2));
    // 0x212a80: 0xac800320  sw          $zero, 0x320($a0)
    ctx->pc = 0x212a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 0));
    // 0x212a84: 0xa4830324  sh          $v1, 0x324($a0)
    ctx->pc = 0x212a84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 804), (uint16_t)GPR_U32(ctx, 3));
    // 0x212a88: 0xa4800326  sh          $zero, 0x326($a0)
    ctx->pc = 0x212a88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 806), (uint16_t)GPR_U32(ctx, 0));
    // 0x212a8c: 0xa4830386  sh          $v1, 0x386($a0)
    ctx->pc = 0x212a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 902), (uint16_t)GPR_U32(ctx, 3));
    // 0x212a90: 0xa0800384  sb          $zero, 0x384($a0)
    ctx->pc = 0x212a90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 900), (uint8_t)GPR_U32(ctx, 0));
    // 0x212a94: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x212a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
    // 0x212a98: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x212a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x212a9c: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x212a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
    // 0x212aa0: 0xac8003b8  sw          $zero, 0x3B8($a0)
    ctx->pc = 0x212aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 952), GPR_U32(ctx, 0));
    // 0x212aa4: 0xac8003b0  sw          $zero, 0x3B0($a0)
    ctx->pc = 0x212aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 944), GPR_U32(ctx, 0));
    // 0x212aa8: 0xc0944a4  jal         func_251290
    ctx->pc = 0x212AA8u;
    SET_GPR_U32(ctx, 31, 0x212AB0u);
    ctx->pc = 0x212AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212AA8u;
            // 0x212aac: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251290u;
    if (runtime->hasFunction(0x251290u)) {
        auto targetFn = runtime->lookupFunction(0x251290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212AB0u; }
        if (ctx->pc != 0x212AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDeleteTextureBlock__FPi_0x251290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212AB0u; }
        if (ctx->pc != 0x212AB0u) { return; }
    }
    ctx->pc = 0x212AB0u;
label_212ab0:
    // 0x212ab0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x212ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ab8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x212ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_212abc:
    // 0x212abc: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x212abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x212ac0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x212ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x212ac4: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x212ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x212ac8: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x212ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x212acc: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x212accu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x212ad0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x212ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x212ad4: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x212ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x212ad8: 0xacc30044  sw          $v1, 0x44($a2)
    ctx->pc = 0x212ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 3));
    // 0x212adc: 0xacc30048  sw          $v1, 0x48($a2)
    ctx->pc = 0x212adcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 3));
    // 0x212ae0: 0xacc3004c  sw          $v1, 0x4C($a2)
    ctx->pc = 0x212ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 3));
    // 0x212ae4: 0xacc30050  sw          $v1, 0x50($a2)
    ctx->pc = 0x212ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 3));
    // 0x212ae8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x212AE8u;
    {
        const bool branch_taken_0x212ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212AE8u;
            // 0x212aec: 0xacc30054  sw          $v1, 0x54($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ae8) {
            ctx->pc = 0x212ABCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212abc;
        }
    }
    ctx->pc = 0x212AF0u;
    // 0x212af0: 0x2881000d  slti        $at, $a0, 0xD
    ctx->pc = 0x212af0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x212af4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x212AF4u;
    {
        const bool branch_taken_0x212af4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x212AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212AF4u;
            // 0x212af8: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212af4) {
            ctx->pc = 0x212B20u;
            goto label_212b20;
        }
    }
    ctx->pc = 0x212AFCu;
    // 0x212afc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x212afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_212b00:
    // 0x212b00: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x212b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x212b04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x212b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x212b08: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x212b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x212b0c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x212b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x212b10: 0x2882000d  slti        $v0, $a0, 0xD
    ctx->pc = 0x212b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x212b14: 0x0  nop
    ctx->pc = 0x212b14u;
    // NOP
    // 0x212b18: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x212B18u;
    {
        const bool branch_taken_0x212b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212b18) {
            ctx->pc = 0x212B00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212b00;
        }
    }
    ctx->pc = 0x212B20u;
label_212b20:
    // 0x212b20: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x212b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x212b24: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x212b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x212b28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x212b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212b2c: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x212b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x212b30: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x212b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x212b34: 0xa60202cc  sh          $v0, 0x2CC($s0)
    ctx->pc = 0x212b34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 716), (uint16_t)GPR_U32(ctx, 2));
    // 0x212b38: 0xae0001e8  sw          $zero, 0x1E8($s0)
    ctx->pc = 0x212b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 0));
    // 0x212b3c: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x212b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x212b40: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x212b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x212b44: 0xa60202ce  sh          $v0, 0x2CE($s0)
    ctx->pc = 0x212b44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 718), (uint16_t)GPR_U32(ctx, 2));
    // 0x212b48: 0xae000218  sw          $zero, 0x218($s0)
    ctx->pc = 0x212b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
    // 0x212b4c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x212b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x212b50: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x212b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x212b54: 0xa60202d0  sh          $v0, 0x2D0($s0)
    ctx->pc = 0x212b54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 720), (uint16_t)GPR_U32(ctx, 2));
    // 0x212b58: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x212b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x212b5c: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x212b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x212b60: 0xae0002c0  sw          $zero, 0x2C0($s0)
    ctx->pc = 0x212b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
    // 0x212b64: 0xa60202d2  sh          $v0, 0x2D2($s0)
    ctx->pc = 0x212b64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 722), (uint16_t)GPR_U32(ctx, 2));
    // 0x212b68: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x212b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x212b6c: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x212b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x212b70: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x212b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
    // 0x212b74: 0xa60202d4  sh          $v0, 0x2D4($s0)
    ctx->pc = 0x212b74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 724), (uint16_t)GPR_U32(ctx, 2));
    // 0x212b78: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x212b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
    // 0x212b7c: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x212b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x212b80: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x212b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x212b84: 0xa60202d6  sh          $v0, 0x2D6($s0)
    ctx->pc = 0x212b84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 726), (uint16_t)GPR_U32(ctx, 2));
    // 0x212b88: 0xa60002d8  sh          $zero, 0x2D8($s0)
    ctx->pc = 0x212b88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 728), (uint16_t)GPR_U32(ctx, 0));
    // 0x212b8c: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x212B8Cu;
    SET_GPR_U32(ctx, 31, 0x212B94u);
    ctx->pc = 0x212B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B8Cu;
            // 0x212b90: 0xaf8091bc  sw          $zero, -0x6E44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939068), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B94u; }
        if (ctx->pc != 0x212B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B94u; }
        if (ctx->pc != 0x212B94u) { return; }
    }
    ctx->pc = 0x212B94u;
label_212b94:
    // 0x212b94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x212b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x212b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x212B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212B9Cu;
            // 0x212ba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212BA4u;
}
