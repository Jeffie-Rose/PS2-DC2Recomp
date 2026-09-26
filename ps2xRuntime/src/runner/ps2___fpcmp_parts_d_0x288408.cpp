#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __fpcmp_parts_d
// Address: 0x288408 - 0x28851c
void ps2___fpcmp_parts_d_0x288408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fpcmp_parts_d_0x288408");
#endif

    switch (ctx->pc) {
        case 0x288450u: goto label_288450;
        case 0x2884c0u: goto label_2884c0;
        case 0x2884ecu: goto label_2884ec;
        default: break;
    }

    ctx->pc = 0x288408u;

    // 0x288408: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x288408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28840c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x28840cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x288410: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288410u;
    {
        const bool branch_taken_0x288410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288410) {
            ctx->pc = 0x288428u;
            goto label_288428;
        }
    }
    ctx->pc = 0x288418u;
    // 0x288418: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x288418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28841c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x28841cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x288420: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288420u;
    {
        const bool branch_taken_0x288420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288420u;
            // 0x288424: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288420) {
            ctx->pc = 0x288430u;
            goto label_288430;
        }
    }
    ctx->pc = 0x288428u;
label_288428:
    // 0x288428: 0x3e00008  jr          $ra
    ctx->pc = 0x288428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28842Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288428u;
            // 0x28842c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288430u;
label_288430:
    // 0x288430: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x288430u;
    {
        const bool branch_taken_0x288430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288430u;
            // 0x288434: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288430) {
            ctx->pc = 0x288460u;
            goto label_288460;
        }
    }
    ctx->pc = 0x288438u;
    // 0x288438: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x288438u;
    {
        const bool branch_taken_0x288438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288438) {
            ctx->pc = 0x28843Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x288438u;
            // 0x28843c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x288450u;
            goto label_288450;
        }
    }
    ctx->pc = 0x288440u;
    // 0x288440: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x288440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x288444: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x288444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x288448: 0x3e00008  jr          $ra
    ctx->pc = 0x288448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28844Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288448u;
            // 0x28844c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288450u;
label_288450:
    // 0x288450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x288450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288454: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x288454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288458: 0x3e00008  jr          $ra
    ctx->pc = 0x288458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28845Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288458u;
            // 0x28845c: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288460u;
label_288460:
    // 0x288460: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x288460u;
    {
        const bool branch_taken_0x288460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288460) {
            ctx->pc = 0x288464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x288460u;
            // 0x288464: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28847Cu;
            goto label_28847c;
        }
    }
    ctx->pc = 0x288468u;
    // 0x288468: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x288468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28846c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28846cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288474: 0x3e00008  jr          $ra
    ctx->pc = 0x288474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288474u;
            // 0x288478: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28847Cu;
label_28847c:
    // 0x28847c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28847Cu;
    {
        const bool branch_taken_0x28847c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28847Cu;
            // 0x288480: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28847c) {
            ctx->pc = 0x2884A4u;
            goto label_2884a4;
        }
    }
    ctx->pc = 0x288484u;
    // 0x288484: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x288484u;
    {
        const bool branch_taken_0x288484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288484) {
            ctx->pc = 0x288488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x288484u;
            // 0x288488: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x288494u;
            goto label_288494;
        }
    }
    ctx->pc = 0x28848Cu;
    // 0x28848c: 0x3e00008  jr          $ra
    ctx->pc = 0x28848Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28848Cu;
            // 0x288490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288494u;
label_288494:
    // 0x288494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x288494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288498: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x288498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28849c: 0x3e00008  jr          $ra
    ctx->pc = 0x28849Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2884A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28849Cu;
            // 0x2884a0: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2884A4u;
label_2884a4:
    // 0x2884a4: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2884A4u;
    {
        const bool branch_taken_0x2884a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2884a4) {
            ctx->pc = 0x2884A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2884A4u;
            // 0x2884a8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x288450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288450;
        }
    }
    ctx->pc = 0x2884ACu;
    // 0x2884ac: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x2884acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2884b0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2884b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2884b4: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2884B4u;
    {
        const bool branch_taken_0x2884b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2884b4) {
            ctx->pc = 0x2884B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2884B4u;
            // 0x2884b8: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2884CCu;
            goto label_2884cc;
        }
    }
    ctx->pc = 0x2884BCu;
    // 0x2884bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2884bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2884c0:
    // 0x2884c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2884c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2884c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2884C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2884C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2884C4u;
            // 0x2884c8: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2884CCu;
label_2884cc:
    // 0x2884cc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2884ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2884d0: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2884d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2884d4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2884D4u;
    {
        const bool branch_taken_0x2884d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2884d4) {
            ctx->pc = 0x2884D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2884D4u;
            // 0x2884d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2884C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2884c0;
        }
    }
    ctx->pc = 0x2884DCu;
    // 0x2884dc: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2884dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2884e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2884E0u;
    {
        const bool branch_taken_0x2884e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2884e0) {
            ctx->pc = 0x2884E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2884E0u;
            // 0x2884e4: 0xdc830010  ld          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2884F8u;
            goto label_2884f8;
        }
    }
    ctx->pc = 0x2884E8u;
    // 0x2884e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2884e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2884ec:
    // 0x2884ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2884ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2884f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2884F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2884F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2884F0u;
            // 0x2884f4: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2884F8u;
label_2884f8:
    // 0x2884f8: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x2884f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2884fc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2884fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x288500: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x288500u;
    {
        const bool branch_taken_0x288500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288500) {
            ctx->pc = 0x288504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x288500u;
            // 0x288504: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2884C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2884c0;
        }
    }
    ctx->pc = 0x288508u;
    // 0x288508: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x288508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x28850c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x28850Cu;
    {
        const bool branch_taken_0x28850c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28850Cu;
            // 0x288510: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28850c) {
            ctx->pc = 0x2884ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2884ec;
        }
    }
    ctx->pc = 0x288514u;
    // 0x288514: 0x3e00008  jr          $ra
    ctx->pc = 0x288514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288514u;
            // 0x288518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28851Cu;
}
