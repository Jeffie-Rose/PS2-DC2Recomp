#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlaySeSrc__6CSceneFiff
// Address: 0x2a7670 - 0x2a77a8
void PlaySeSrc__6CSceneFiff_0x2a7670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlaySeSrc__6CSceneFiff_0x2a7670");
#endif

    switch (ctx->pc) {
        case 0x2a769cu: goto label_2a769c;
        case 0x2a76a8u: goto label_2a76a8;
        case 0x2a76bcu: goto label_2a76bc;
        case 0x2a7704u: goto label_2a7704;
        default: break;
    }

    ctx->pc = 0x2a7670u;

    // 0x2a7670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a7670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a7674: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a7674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a7678: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a7678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a767c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a7680: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a7680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7684: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2a7684u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a7688: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a7688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a768c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a768cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a7690: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2a7690u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2a7694: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2A7694u;
    SET_GPR_U32(ctx, 31, 0x2A769Cu);
    ctx->pc = 0x2A7698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7694u;
            // 0x2a7698: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A769Cu; }
        if (ctx->pc != 0x2A769Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A769Cu; }
        if (ctx->pc != 0x2A769Cu) { return; }
    }
    ctx->pc = 0x2A769Cu;
label_2a769c:
    // 0x2a769c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a769cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a76a0: 0xc040044  jal         func_100110
    ctx->pc = 0x2A76A0u;
    SET_GPR_U32(ctx, 31, 0x2A76A8u);
    ctx->pc = 0x2A76A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A76A0u;
            // 0x2a76a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100110u;
    if (runtime->hasFunction(0x100110u)) {
        auto targetFn = runtime->lookupFunction(0x100110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A76A8u; }
        if (ctx->pc != 0x2A76A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A76A8u; }
        if (ctx->pc != 0x2A76A8u) { return; }
    }
    ctx->pc = 0x2A76A8u;
label_2a76a8:
    // 0x2a76a8: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2A76A8u;
    {
        const bool branch_taken_0x2a76a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A76ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A76A8u;
            // 0x2a76ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76a8) {
            ctx->pc = 0x2A778Cu;
            goto label_2a778c;
        }
    }
    ctx->pc = 0x2A76B0u;
    // 0x2a76b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a76b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a76b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a76b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a76b8: 0x34079e00  ori         $a3, $zero, 0x9E00
    ctx->pc = 0x2a76b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40448);
label_2a76bc:
    // 0x2a76bc: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x2a76bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2a76c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a76c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a76c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a76c8: 0x14700007  bne         $v1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A76C8u;
    {
        const bool branch_taken_0x2a76c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x2A76CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A76C8u;
            // 0x2a76cc: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76c8) {
            ctx->pc = 0x2A76E8u;
            goto label_2a76e8;
        }
    }
    ctx->pc = 0x2A76D0u;
    // 0x2a76d0: 0x34019e00  ori         $at, $zero, 0x9E00
    ctx->pc = 0x2a76d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40448);
    // 0x2a76d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a76d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a76d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2a76d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a76dc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2a76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2a76e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A76E0u;
    {
        const bool branch_taken_0x2a76e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A76E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A76E0u;
            // 0x2a76e4: 0x612021  addu        $a0, $v1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76e0) {
            ctx->pc = 0x2A76F8u;
            goto label_2a76f8;
        }
    }
    ctx->pc = 0x2A76E8u;
label_2a76e8:
    // 0x2a76e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a76e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a76ec: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x2a76ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a76f0: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A76F0u;
    {
        const bool branch_taken_0x2a76f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A76F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A76F0u;
            // 0x2a76f4: 0x24c60088  addiu       $a2, $a2, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76f0) {
            ctx->pc = 0x2A76BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a76bc;
        }
    }
    ctx->pc = 0x2A76F8u;
label_2a76f8:
    // 0x2a76f8: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A76F8u;
    {
        const bool branch_taken_0x2a76f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A76FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A76F8u;
            // 0x2a76fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76f8) {
            ctx->pc = 0x2A7744u;
            goto label_2a7744;
        }
    }
    ctx->pc = 0x2A7700u;
    // 0x2a7700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a7700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7704:
    // 0x2a7704: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2a7704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2a7708: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a770c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2a770cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2a7710: 0x8c239e00  lw          $v1, -0x6200($at)
    ctx->pc = 0x2a7710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942208)));
    // 0x2a7714: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7714u;
    {
        const bool branch_taken_0x2a7714 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2A7718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7714u;
            // 0x2a7718: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7714) {
            ctx->pc = 0x2A7734u;
            goto label_2a7734;
        }
    }
    ctx->pc = 0x2A771Cu;
    // 0x2a771c: 0x34019e00  ori         $at, $zero, 0x9E00
    ctx->pc = 0x2a771cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40448);
    // 0x2a7720: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2a7720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a7724: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2a7724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a7728: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2a7728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2a772c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A772Cu;
    {
        const bool branch_taken_0x2a772c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A772Cu;
            // 0x2a7730: 0x612021  addu        $a0, $v1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a772c) {
            ctx->pc = 0x2A7744u;
            goto label_2a7744;
        }
    }
    ctx->pc = 0x2A7734u;
label_2a7734:
    // 0x2a7734: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a7734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a7738: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x2a7738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a773c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2A773Cu;
    {
        const bool branch_taken_0x2a773c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A773Cu;
            // 0x2a7740: 0x24a50088  addiu       $a1, $a1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a773c) {
            ctx->pc = 0x2A7704u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a7704;
        }
    }
    ctx->pc = 0x2A7744u;
label_2a7744:
    // 0x2a7744: 0x0  nop
    ctx->pc = 0x2a7744u;
    // NOP
    // 0x2a7748: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A7748u;
    {
        const bool branch_taken_0x2a7748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7748) {
            ctx->pc = 0x2A778Cu;
            goto label_2a778c;
        }
    }
    ctx->pc = 0x2A7750u;
    // 0x2a7750: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x2a7750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x2a7754: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a7754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a7758: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x2a7758u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a775c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2A775Cu;
    {
        const bool branch_taken_0x2a775c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a775c) {
            ctx->pc = 0x2A778Cu;
            goto label_2a778c;
        }
    }
    ctx->pc = 0x2A7764u;
    // 0x2a7764: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a7764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a7768: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a7768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a776c: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x2a776cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a7770: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a7770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a7774: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a7774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a7778: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a7778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a777c: 0xe4740048  swc1        $f20, 0x48($v1)
    ctx->pc = 0x2a777cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x2a7780: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a7780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a7784: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a7784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a7788: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2a7788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2a778c:
    // 0x2a778c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a778cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7790: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2a7790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a7794: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a7794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7798: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a7798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a779c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a779cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a77a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A77A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A77A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A77A0u;
            // 0x2a77a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A77A8u;
}
